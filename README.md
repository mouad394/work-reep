🚀 1. Initialize or Clone a Repository

    Create a new repo locally:

git init

OR clone an existing repo from GitHub:

    git clone <repo-url>

🧾 2. Check Repository Status

    See what’s going on:

    git status

✏️ 3. Add Files

    Stage a specific fie:

git add file.txt

Stage all changes:

    git add .

✅ 4. Commit Changes

    Commit staged files with a message:

    git commit -m "Initial commit"

🌿 5. (Optional) Create a Branch

    Create and switch to a new branch:

    git checkout -b feature-branch

📤 6. Connect to Remote (like GitHub)

    Add the GitHub repo as the remote:

    git remote add origin <repo-url>

🚚 7. Push Code to GitHub

    Push for the first time and set the upstream:

git push -u origin main

Later, just use:

    git push

🔄 8. Pull Changes from Remote

    Sync with the latest remote changes:

    git pull

📖 9. View Commit History

    See past commits:

    git log --oneline

💡 Summary Cheat Sheet (in order):

git init                 # or git clone <url>
git status
git add .
git commit -m "message"
git branch -M main       # Rename branch to main (optional)
git remote add origin <url>
git push -u origin main
git pull                 # Get latest changes
git log --oneline
