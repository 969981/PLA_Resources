/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c6440; name: FUN_005c6440
 */


void FUN_005c6440(long *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0xd0);
  *param_1 = lVar5;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 0x10);
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = *(long *)(lVar7 + 8);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 005c64b4 to 005c64cf has its CatchHandler @ 005c659c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(lVar7 + 8),lVar6,
                   lVar6 + 1);
    }
  }
  *(long *)(lVar5 + 0x20) = *param_3;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x28) = *param_4;
  *param_4 = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  uVar10 = param_4[1];
  if ((uVar10 & 1) == 0) {
    uVar9 = uVar10 >> 1;
    if (uVar9 != 0) {
      puVar11 = param_4 + 2;
      puVar12 = (undefined8 *)(lVar5 + 0xc0);
      do {
        uVar13 = *puVar11;
        puVar12[-0x10] = puVar11[1];
        puVar12[-0x11] = uVar13;
        uVar14 = puVar11[3];
        uVar13 = puVar11[2];
        uVar16 = puVar11[5];
        uVar15 = puVar11[4];
        uVar18 = puVar11[7];
        uVar17 = puVar11[6];
        uVar19 = puVar11[8];
        puVar12[-8] = puVar11[9];
        puVar12[-9] = uVar19;
        uVar9 = uVar9 - 1;
        puVar12[-10] = uVar18;
        puVar12[-0xb] = uVar17;
        puVar12[-0xc] = uVar16;
        puVar12[-0xd] = uVar15;
        puVar12[-0xe] = uVar14;
        puVar12[-0xf] = uVar13;
        uVar17 = puVar11[0xf];
        uVar16 = puVar11[0xe];
        uVar14 = puVar11[0xb];
        uVar13 = puVar11[10];
        uVar15 = puVar11[0xc];
        uVar2 = *(undefined4 *)(puVar11 + 0x10);
        puVar12[-4] = puVar11[0xd];
        puVar12[-5] = uVar15;
        puVar12[-2] = uVar17;
        puVar12[-3] = uVar16;
        *(undefined4 *)(puVar12 + -1) = uVar2;
        puVar12[-6] = uVar14;
        puVar12[-7] = uVar13;
        *puVar12 = puVar11[0x11];
        puVar11[0x11] = 0;
        puVar11 = puVar11 + 0x12;
        puVar12 = puVar12 + 0x12;
      } while (uVar9 != 0);
      uVar10 = param_4[1];
    }
    *(ulong *)(lVar5 + 0x30) = uVar10 & 0xfffffffffffffffe;
  }
  else {
    uVar13 = param_4[2];
    *(undefined8 *)(lVar5 + 0x40) = param_4[3];
    *(undefined8 *)(lVar5 + 0x38) = uVar13;
    *(ulong *)(lVar5 + 0x30) = param_4[1] | 1;
    param_4[1] = 0;
  }
  *(undefined8 *)(lVar5 + 200) = param_4[0x14];
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


