/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294dc8c; name: FUN_0294dc8c
 */


void FUN_0294dc8c(int param_1,int param_2,byte param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  if (param_1 == 2) {
    if (param_3 < 6) {
      puVar4 = &DAT_03a7ebc8;
LAB_0294dce8:
      uVar1 = *(uint *)(puVar4 + (ulong)param_3 * 4);
      puVar6 = &DAT_03a7ebe0;
LAB_0294dd54:
      uVar2 = puVar6[uVar1] == 0;
      if (1 < (byte)puVar6[uVar1]) {
        uVar2 = 2;
      }
      goto LAB_0294dd6c;
    }
  }
  else if (param_1 == 1) {
    if (param_3 < 6) {
      if ((param_2 - 1U & 0xff) < 5) {
        puVar5 = (undefined4 *)(&PTR_DAT_04276940)[(char)(param_2 - 1U)];
      }
      else {
        puVar5 = &DAT_03a7eb68;
      }
      uVar1 = puVar5[param_3];
      if ((int)uVar1 < 5) {
        puVar6 = &DAT_03a7ebe5;
        goto LAB_0294dd54;
      }
    }
  }
  else if ((param_1 == 0) && (param_3 < 2)) {
    puVar4 = &DAT_03a7eb50;
    goto LAB_0294dce8;
  }
  uVar2 = 2;
LAB_0294dd6c:
  uVar3 = FUN_0294dd9c(param_1,param_2,uVar2,0);
  FUN_0294e104(param_1,param_2,uVar3,param_4);
  return;
}


