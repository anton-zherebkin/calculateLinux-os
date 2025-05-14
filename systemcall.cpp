#include <iostream> 
#include <unistd.h> 
#include <sys/types.h> 
#include <errno.h> 
#include <cstring> 

int main() { 
gid_t new_gid = 1001; // Replace with a valid group ID on your system 
// Attempt to change the group ID 
if (setgid(new_gid) == 0) { 
std::cout << "Group ID successfully changed to " << new_gid << std::endl; 
} else { 
std::cerr << "Failed to change Group ID: " << std::strerror(errno) << std::endl; 
}
 return 0; 
} 

