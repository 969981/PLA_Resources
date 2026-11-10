/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01504f70; name: FUN_01504f70
 */


void FUN_01504f70(long param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x630) + 0xb0);
  if ((int)uVar2 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    piVar3 = (int *)(param_1 + 0x648);
    do {
      if (*piVar3 != 0) {
        uVar4 = 1;
        goto LAB_01504fb0;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  uVar4 = 0;
LAB_01504fb0:
  local_40 = 0xe591f7cd38c690c3;
  pcStack_38 = "InputDecide";
  local_30 = 0xb;
  uStack_28 = 0;
  FUN_01504e0c(param_1,&local_40,uVar4);
  lVar1 = FUN_00d2e81c(param_1 + 0x180,"button_decide_x");
  if (lVar1 == 0) {
    return;
  }
  FUN_0280779c(lVar1,uVar4);
  return;
}


