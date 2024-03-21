git add .
read -p "please input commit message: " message
git commit -m "$message"
git push -u origin main
