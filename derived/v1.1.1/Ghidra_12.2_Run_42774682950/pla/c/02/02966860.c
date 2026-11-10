/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02966860; name: FUN_02966860
 */


bool FUN_02966860(long *param_1,byte param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 < 6) {
    lVar10 = param_1[1];
    lVar6 = 0;
    lVar4 = 0;
  }
  else {
    if (param_2 < 0xc) {
      plVar5 = (long *)(param_1[1] + 8);
      lVar6 = 2;
      lVar4 = 2;
      goto LAB_029668ac;
    }
    if (param_2 < 0x12) {
      plVar5 = (long *)(param_1[1] + 8);
      lVar6 = 1;
      lVar4 = 1;
      goto LAB_029668ac;
    }
    if (param_2 < 0x18) {
      plVar5 = (long *)(param_1[1] + 8);
      lVar6 = 3;
      lVar4 = 3;
      goto LAB_029668ac;
    }
    lVar10 = param_1[1];
    lVar6 = (ulong)(param_2 < 0x1e) << 2;
    lVar4 = (ulong)(param_2 < 0x1e) << 2;
  }
  plVar5 = (long *)(lVar10 + 8);
LAB_029668ac:
  lVar10 = *plVar5;
  bVar2 = FUN_0294da60(*(undefined4 *)(*param_1 + 0x110),
                       *(undefined1 *)(*(long *)(*param_1 + 0x58) + 0x55),lVar4);
  pbVar7 = (byte *)(lVar10 + lVar6 * 0x38 + 0x38);
  if (bVar2 < *pbVar7) {
    cVar8 = '\0';
    uVar9 = (ulong)bVar2;
    do {
      lVar4 = *(long *)(lVar10 + lVar6 * 0x38 + 8 + uVar9 * 8);
      lVar11 = *(long *)(lVar4 + 0x60);
      uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar11 + 0x98));
      bVar1 = false;
      if (((uVar3 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
        bVar1 = *(short *)(lVar4 + 0x74) != 0;
      }
      cVar8 = cVar8 + bVar1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *pbVar7);
    bVar1 = cVar8 != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


