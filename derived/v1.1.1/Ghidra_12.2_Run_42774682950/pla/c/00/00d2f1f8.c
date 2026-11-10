/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2f1f8; name: FUN_00d2f1f8
 */


void FUN_00d2f1f8(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auStack_58 [8];
  long local_48;
  
  *(undefined1 *)(param_1 + 0x3f0) = 1;
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x3b0) + 0x40);
  lVar4 = *(long *)(*(long *)(param_1 + 0x3b0) + 0x48);
  puVar12 = puVar11 + lVar4 * 0x24;
  if (lVar4 != 0) {
    do {
      uVar2 = (*(code *)puVar11[4])(puVar11 + 8);
      if (((uVar2 & 1) != 0) && (uVar2 = (*(code *)puVar11[0x14])(puVar11 + 0x18), (uVar2 & 1) != 0)
         ) goto LAB_00d2f26c;
      puVar11 = puVar11 + 0x24;
    } while (puVar11 != puVar12);
    puVar11 = puVar12;
  }
LAB_00d2f26c:
  puVar13 = puVar11 + 0x24;
  if (puVar12 != puVar11 && puVar13 != puVar12) {
    do {
      puVar1 = puVar13 + 8;
      uVar2 = (*(code *)puVar13[4])(puVar1);
      if (((uVar2 & 1) == 0) || (uVar2 = (*(code *)puVar13[0x14])(puVar13 + 0x18), (uVar2 & 1) == 0)
         ) {
        *puVar11 = *puVar13;
        puVar11[1] = puVar13[1];
        plVar10 = (long *)puVar11[3];
        puVar11[2] = puVar13[2];
        puVar11[3] = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        uVar5 = puVar13[3];
        puVar13[3] = 0;
        puVar11[3] = uVar5;
        pcVar6 = (code *)puVar11[5];
        if (pcVar6 != (code *)0x0) {
          puVar11[6] = 0;
          puVar11[7] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          (*pcVar6)(puVar11 + 8);
        }
        if ((code *)puVar13[7] != (code *)0x0) {
          (*(code *)puVar13[7])(puVar1,puVar11 + 8);
          uVar7 = puVar13[4];
          uVar5 = puVar13[5];
          uVar9 = puVar13[7];
          puVar11[6] = puVar13[6];
          puVar11[7] = uVar9;
          puVar11[4] = uVar7;
          puVar11[5] = uVar5;
          pcVar6 = (code *)puVar13[5];
          if (pcVar6 != (code *)0x0) {
            puVar13[6] = 0;
            puVar13[7] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            (*pcVar6)(puVar1);
          }
        }
        pcVar6 = (code *)puVar11[0x15];
        if (pcVar6 != (code *)0x0) {
          puVar11[0x16] = 0;
          puVar11[0x17] = 0;
          puVar11[0x14] = 0;
          puVar11[0x15] = 0;
          (*pcVar6)(puVar11 + 0x18);
        }
        if ((code *)puVar13[0x17] != (code *)0x0) {
          (*(code *)puVar13[0x17])(puVar13 + 0x18,puVar11 + 0x18);
          uVar7 = puVar13[0x14];
          uVar5 = puVar13[0x15];
          uVar9 = puVar13[0x17];
          puVar11[0x16] = puVar13[0x16];
          puVar11[0x17] = uVar9;
          puVar11[0x14] = uVar7;
          puVar11[0x15] = uVar5;
          pcVar6 = (code *)puVar13[0x15];
          if (pcVar6 != (code *)0x0) {
            puVar13[0x16] = 0;
            puVar13[0x17] = 0;
            puVar13[0x14] = 0;
            puVar13[0x15] = 0;
            (*pcVar6)(puVar13 + 0x18);
          }
        }
        puVar11 = puVar11 + 0x24;
      }
      puVar13 = puVar13 + 0x24;
    } while (puVar12 != puVar13);
  }
  lVar4 = *(long *)(param_1 + 0x3b0);
  FUN_00d2f50c(&local_48,lVar4 + 0x20,puVar11,
               *(long *)(lVar4 + 0x40) + *(long *)(lVar4 + 0x48) * 0x120);
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  plVar10 = (long *)(*(long *)(param_1 + 0x3d0) + 0x48);
  if (*plVar10 != 0) {
    lVar8 = *plVar10 * 0x120;
    lVar4 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x40);
    cVar3 = '\0';
    while( true ) {
      lVar8 = lVar8 + -0x120;
      plVar10 = (long *)(param_1 + 0x3b0);
      if (cVar3 != '\0') {
        plVar10 = (long *)(param_1 + 0x3d0);
      }
      lVar14 = *plVar10;
      uVar2 = *(ulong *)(lVar14 + 0x48);
      if (uVar2 < *(ulong *)(lVar14 + 0x50)) {
        FUN_00d373e0(lVar14 + 0x20,*(long *)(lVar14 + 0x40) + uVar2 * 0x120,lVar4);
        *(long *)(lVar14 + 0x48) = *(long *)(lVar14 + 0x48) + 1;
      }
      else {
        local_48 = *(long *)(lVar14 + 0x40) + uVar2 * 0x120;
        FUN_00d372f8(auStack_58,lVar14 + 0x20,&local_48,1,lVar4);
      }
      if (lVar8 == 0) break;
      cVar3 = *(char *)(param_1 + 0x3f0);
      lVar4 = lVar4 + 0x120;
    }
    lVar4 = *(long *)(param_1 + 0x3d0);
    plVar10 = (long *)(lVar4 + 0x48);
    lVar8 = *plVar10;
    if (lVar8 != 0) {
      lVar4 = *(long *)(lVar4 + 0x40) + 0xc0;
      do {
        pcVar6 = *(code **)(lVar4 + -0x18);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar4 + -0x10) = 0;
          *(undefined8 *)(lVar4 + -8) = 0;
          *(undefined8 *)(lVar4 + -0x20) = 0;
          *(undefined8 *)(lVar4 + -0x18) = 0;
          (*pcVar6)(lVar4);
        }
        pcVar6 = *(code **)(lVar4 + -0x98);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar4 + -0x90) = 0;
          *(undefined8 *)(lVar4 + -0x88) = 0;
          *(undefined8 *)(lVar4 + -0xa0) = 0;
          *(undefined8 *)(lVar4 + -0x98) = 0;
          (*pcVar6)(lVar4 + -0x80);
        }
        lVar8 = lVar8 + -1;
        if (*(long **)(lVar4 + -0xa8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0xa8) + 0x20))();
        }
        lVar4 = lVar4 + 0x120;
      } while (lVar8 != 0);
    }
  }
  *plVar10 = 0;
  return;
}


