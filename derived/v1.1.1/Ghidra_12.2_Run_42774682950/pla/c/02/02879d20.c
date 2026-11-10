/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02879d20; name: nninitStartup
 */


void nninitStartup(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  MemoryInfo aMStack_a8 [24];
  long local_90;
  ulong local_70;
  ulong local_68 [7];
  
  nn::os::QueryMemoryInfo((MemoryInfo *)local_68);
  if (0x100000000 < local_68[0]) {
    FUN_02bcddd0();
  }
  nn::os::SetMemoryHeapSize(0x1000000);
  nn::os::AllocateMemoryBlock(&local_70,0x1000000);
  FUN_0287a808(&DAT_043ec118,local_70,0x1000000);
  FUN_02c4fac0(&LAB_0287a5a4,&LAB_0287a5c0);
  DAT_043ec108 = 0;
  DAT_043ec110 = 0;
  DAT_043ec0f8 = &PTR_LAB_04286920;
  DAT_043ec100 = &PTR_LAB_04286a08;
  FUN_02bcdd90(&DAT_043ec0f8);
  FUN_02c4f950(aMStack_a8);
  lVar2 = (*(code *)DAT_043ec0f8[2])(&DAT_043ec0f8,local_90,0x10);
  if (lVar2 != 0) {
    uVar3 = (*(code *)DAT_043ec0f8[0x18])(&DAT_043ec0f8);
    if ((uVar3 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(&DAT_043ec0f8,lVar2,local_90,8);
        goto LAB_02879e50;
      }
    }
    (*(code *)DAT_043ec0f8[3])(&DAT_043ec0f8,lVar2,local_90,8);
  }
LAB_02879e50:
  nn::os::QueryMemoryInfo(aMStack_a8);
  FUN_0094b1c0(&DAT_043ec018,0x1000000,&DAT_043ec0f8,1);
  FUN_0094b1c0(&DAT_043ebfa8,0xa7400000,&DAT_043ec0f8,1);
  FUN_02bcdd50(&DAT_043ebfa8);
  FUN_0094b1c0(&DAT_043ec088,local_90 + -0xa8400000,&DAT_043ec0f8,1);
  FUN_02bcdd70(&DAT_043ec088);
  nn::os::SetMemoryAllocatorForThreadLocal
            ((_func_void_ptr_ulong_ulong *)&LAB_0287a6d4,(_func_void_void_ptr_ulong *)&LAB_0287a6f0)
  ;
  FUN_02bcddb0();
  return;
}


