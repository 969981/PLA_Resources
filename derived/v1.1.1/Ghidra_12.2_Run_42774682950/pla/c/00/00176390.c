/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00176390; name: FUN_00176390
 */


void FUN_00176390(long param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_3 + 1) & 0x3f;
  if (uVar1 == 4) {
    uVar5 = (ulong)*(byte *)(*param_3 + 0xb);
  }
  else {
    if (uVar1 != 0x14) {
      if (uVar1 == 5) {
        lVar6 = *param_3;
        lVar4 = *(long *)(lVar6 + 0x28);
        if (((lVar4 == 0) || ((*(byte *)(lVar4 + 10) >> 4 & 1) != 0)) ||
           (lVar4 = FUN_001738a0(lVar4,4,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100)),
           lVar4 == 0)) {
          iVar3 = FUN_00172700(lVar6);
          uVar5 = (ulong)iVar3;
          goto LAB_0017641c;
        }
      }
      else {
        lVar4 = FUN_00173900(param_1,param_3,4);
        if (*(int *)(lVar4 + 8) == 0) {
          FUN_00159980(param_1,param_3,"get length of");
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x17648c);
          (*pcVar2)();
        }
      }
      FUN_00173a20(param_1,lVar4,param_3,param_3,param_2,1);
      return;
    }
    uVar5 = *(ulong *)(*param_3 + 0x10);
  }
LAB_0017641c:
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = 0x13;
  return;
}


