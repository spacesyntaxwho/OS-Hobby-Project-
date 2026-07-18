extern "C" void kernel_main()
{
    volatile char* video_memory = (volatile char*)0xB8000;

    video_memory[0] = 'H';
    video_memory[1] = 0x0F;

    while (1)
    {
    }
}