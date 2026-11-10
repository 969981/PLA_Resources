/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00689548; name: FUN_00689548
 */


void FUN_00689548(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  undefined *puVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/gamesync.pb.cc"
                 ,0x1549);
                    /* try { // try from 006895a0 to 006895b3 has its CatchHandler @ 0068980c */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 006895b4 to 006895bb has its CatchHandler @ 00689808 */
    FUN_0030f41c(auStack_28,uVar5);
    FUN_0030f658(auStack_60);
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) == 0) goto LAB_00689570;
LAB_006895cc:
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0033aecc();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar10 + 0x10);
    lVar2 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar2 = uVar10 + 9;
      uVar1 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_002e4094(lVar6,lVar2,uVar1);
    pbVar9 = *(byte **)(param_2 + 0x10);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) == 0) goto LAB_0068957c;
LAB_00689610:
    if (*(long *)(pbVar9 + 8) != 0) goto LAB_00689618;
LAB_00689660:
    iVar4 = *(int *)(param_2 + 0x24);
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) != 0) goto LAB_006895cc;
LAB_00689570:
    pbVar9 = *(byte **)(param_2 + 0x10);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) != 0) goto LAB_00689610;
LAB_0068957c:
    if (uVar10 >> 1 == 0) goto LAB_00689660;
LAB_00689618:
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    pbVar11 = *(byte **)(param_1 + 0x10);
    if (pbVar11 != PTR_DAT_043730c0) {
      if (pbVar11 != pbVar9) {
        uVar1 = *(ulong *)(pbVar9 + 8);
        pbVar3 = *(byte **)(pbVar9 + 0x10);
        if ((uVar10 & 1) == 0) {
          pbVar3 = pbVar9 + 1;
          uVar1 = uVar10 >> 1;
        }
        FUN_00291910(pbVar11,pbVar3,uVar1);
      }
      goto LAB_00689660;
    }
    FUN_0029175c((undefined8 *)(param_1 + 0x10),puVar7);
    iVar4 = *(int *)(param_2 + 0x24);
  }
  if (iVar4 != 4) {
    if (iVar4 == 3) {
      if (*(int *)(param_1 + 0x24) == 3) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
      }
      else {
        FUN_006884d0(param_1);
        *(undefined4 *)(param_1 + 0x24) = 3;
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        uVar5 = FUN_0068bd20(puVar7);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        if (*(int *)(param_2 + 0x24) != 3) {
          FUN_00688624(uVar5,PTR_DAT_04375bc0);
          return;
        }
      }
      FUN_00688624(uVar5,*(undefined8 *)(param_2 + 0x18));
      return;
    }
    if (iVar4 != 2) {
      return;
    }
    pbVar9 = *(byte **)(param_2 + 0x18);
    if (*(int *)(param_1 + 0x24) != 2) {
      FUN_006884d0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      *(undefined **)(param_1 + 0x18) = PTR_DAT_043730c0;
    }
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    pbVar11 = *(byte **)(param_1 + 0x18);
    if (pbVar11 == PTR_DAT_043730c0) {
      FUN_0029175c((undefined8 *)(param_1 + 0x18),puVar7,pbVar9);
      return;
    }
    if (pbVar11 == pbVar9) {
      return;
    }
    uVar10 = *(ulong *)(pbVar9 + 8);
    pbVar3 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar3 = pbVar9 + 1;
      uVar10 = (ulong)(*pbVar9 >> 1);
    }
    FUN_00291910(pbVar11,pbVar3,uVar10);
    return;
  }
  if (*(int *)(param_1 + 0x24) == 4) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    FUN_006884d0(param_1);
    *(undefined4 *)(param_1 + 0x24) = 4;
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    uVar5 = FUN_0068bde0(puVar7);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    if (*(int *)(param_2 + 0x24) != 4) {
      puVar8 = PTR_DAT_04375b00;
      goto LAB_006897c8;
    }
  }
  puVar8 = *(undefined **)(param_2 + 0x18);
LAB_006897c8:
  FUN_0068876c(uVar5,puVar8);
  return;
}


