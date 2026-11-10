/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786610; name: FUN_02786610
 */


void FUN_02786610(undefined1 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uStack_50 = *(undefined8 *)(param_2 + 8);
  local_38 = 0;
  local_58 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_48 = 0xfffffffffffffff;
  uStack_40 = 0;
  plVar4 = *(long **)(param_2 + 0x218);
  plVar5 = *(long **)(param_2 + 0x220);
  if (plVar4 != plVar5) {
    do {
      if (*plVar4 == *param_3) {
        FUN_02787cd0(&local_68,plVar4 + 1);
      }
      plVar4 = plVar4 + 3;
    } while (plVar5 != plVar4);
    if (local_68 != lStack_60) {
      lVar3 = FUN_0278d150((lStack_60 - local_68 >> 4) + -1);
      puVar1 = (undefined8 *)(local_68 + lVar3 * 0x10);
      uVar2 = *puVar1;
      *(undefined8 *)(param_1 + 0xc) = puVar1[1];
      *(undefined8 *)(param_1 + 4) = uVar2;
      *param_1 = 1;
      goto LAB_027866c4;
    }
  }
  *param_1 = 0;
LAB_027866c4:
  FUN_02793cc8(&local_68);
  return;
}


