if (payload.success) {             console.log("Uploaded file successfully", payload);             await navigator.clipboard.writeText(payload.content.html_url);           }