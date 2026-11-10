/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ee800; name: FUN_013ee800
 */


/* WARNING: Removing unreachable block (ram,0x013ee91c) */
/* WARNING: Removing unreachable block (ram,0x013ee878) */
/* WARNING: Removing unreachable block (ram,0x013ee8ec) */

void FUN_013ee800(long *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = *(int *)((long)param_1 + 0x5b4);
  if (iVar3 == 3) goto LAB_013ee8b0;
  while( true ) {
    while (lVar1 = param_1[0xb6], iVar3 != 2) {
      if (iVar3 == 1) {
        uVar2 = (**(code **)(*param_1 + 0x98))(param_1,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        (**(code **)(*param_1 + 0xa0))(param_1,0);
        iVar3 = 2;
        *(undefined4 *)((long)param_1 + 0x5b4) = 2;
      }
      else {
        if ((int)lVar1 != 1) {
          return;
        }
        (**(code **)(*param_1 + 0x90))(param_1,0);
        param_1[0xb6] = 0x100000000;
        iVar3 = 1;
      }
    }
    FUN_013ee930(param_1);
    if ((int)lVar1 != 2) break;
    (**(code **)(*param_1 + 0x90))(param_1,1);
    param_1[0xb6] = 0x300000000;
LAB_013ee8b0:
    uVar2 = (**(code **)(*param_1 + 0x98))(param_1,1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    (**(code **)(*param_1 + 0xa0))(param_1,1);
    iVar3 = 0;
    *(undefined4 *)((long)param_1 + 0x5b4) = 0;
  }
  return;
}


