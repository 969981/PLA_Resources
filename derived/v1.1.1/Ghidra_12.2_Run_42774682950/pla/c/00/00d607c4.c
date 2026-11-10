/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d607c4; name: FUN_00d607c4
 */


void FUN_00d607c4(long param_1,int param_2,byte param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  bVar4 = (param_3 & 1) == 0;
  *(byte *)(param_1 + param_2 + 0x1645) = param_3 & 1;
  puVar1 = (undefined1 *)0xc1a949029450238f;
  if (bVar4) {
    puVar1 = &DAT_cbf29ce484222645;
  }
  pcVar2 = "PLAY_UI_COMMON_DECIDE";
  if (bVar4) {
    pcVar2 = "";
  }
  iVar7 = 0;
  uVar3 = 0x15;
  if (bVar4) {
    uVar3 = 0;
  }
  do {
    lVar5 = FUN_00d57364(param_1,param_2,iVar7);
    if (lVar5 != 0) {
      plVar6 = *(long **)(lVar5 + 0x280);
      *(undefined1 **)(lVar5 + 0x268) = puVar1;
      *(char **)(lVar5 + 0x270) = pcVar2;
      *(undefined8 *)(lVar5 + 0x278) = uVar3;
      *(undefined8 *)(lVar5 + 0x280) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x30);
  return;
}


