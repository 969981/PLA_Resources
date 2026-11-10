/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ddfb8; name: FUN_006ddfb8
 */


void FUN_006ddfb8(undefined8 param_1,long param_2,char *param_3)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  undefined8 uVar3;
  int local_e8 [20];
  byte local_98;
  char acStack_97 [15];
  char *local_88;
  
  nn::os::LockMutex((MutexType *)(param_2 + 200));
  sVar1 = strlen(param_3);
                    /* try { // try from 006ddff0 to 006ddffb has its CatchHandler @ 006de0b8 */
  FUN_02762710(param_2 + 0x98,param_3,sVar1);
  if ((*(long **)(param_2 + 0xb8) != (long *)0x0) &&
     (uVar2 = (**(code **)(**(long **)(param_2 + 0xb8) + 0x20))(), (uVar2 & 1) != 0)) {
    uVar3 = (**(code **)(**(long **)(param_2 + 0xb8) + 0x38))();
                    /* try { // try from 006de02c to 006de033 has its CatchHandler @ 006de0a0 */
    FUN_00290d84(local_e8,uVar3);
    if (local_e8[0] == 0) {
      __s = acStack_97;
      if ((local_98 & 1) != 0) {
        __s = local_88;
      }
      sVar1 = strlen(__s);
                    /* try { // try from 006de060 to 006de06b has its CatchHandler @ 006de09c */
      FUN_02762710(param_2 + 0x78,__s,sVar1);
    }
    FUN_00290f08(local_e8);
  }
                    /* try { // try from 006de074 to 006de07f has its CatchHandler @ 006de0a4 */
  FUN_002985e8(param_1,param_2 + 0x78);
  nn::os::UnlockMutex((MutexType *)(param_2 + 200));
  return;
}


