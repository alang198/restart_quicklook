There is a bug in Mac OS 12 (and potentially OS 13 as well) that causes QuickLook to only display the thumbnails for image, video and PDF files.

The "solution" most people online seem to have is to relaunch Finder whenever the problem crops up, but when it happens almost daily that's untenable. Thus, I made a simple launchd program to periodically kill (effectively restarting) the offending QuickLook process (QuickLookUIService).

To use as is, simply build the provided Xcode project. Copy the generated executable into /usr/local/bin and provided .plist into /Library/LaunchDaemons.

Then run these two commands from the terminal:

    sudo chown root /Library/LaunchDaemons/com.puyoman.restart_qucklookd.plist
    
    sudo launchctl bootstrap system /Library/LaunchDaemons/com.puyoman.restart_quicklookd.plist

Currently I have the interval set to 4 hours, might need to adjust it based on how bad the problem is.
