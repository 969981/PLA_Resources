/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068ff1c; name: FUN_0068ff1c
 */


void FUN_0068ff1c(long param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong *puVar10;
  long lVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x63d);
                    /* try { // try from 0068ff78 to 0068ff8b has its CatchHandler @ 006901ac */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 0068ff8c to 0068ff93 has its CatchHandler @ 006901a8 */
    FUN_0030f41c(auStack_68,uVar4);
    FUN_0030f658(auStack_60);
    uVar7 = *(ulong *)(param_2 + 8);
    if ((uVar7 & 1) == 0) goto LAB_0068ff48;
LAB_0068ffa8:
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) == 0) {
      lVar11 = FUN_0033aecc((ulong *)(param_1 + 8));
    }
    else {
      lVar11 = (uVar8 & 0xfffffffffffffffe) + 8;
    }
    uVar8 = *(ulong *)(uVar7 + 0x10);
    lVar1 = *(long *)(uVar7 + 0x18);
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      lVar1 = uVar7 + 9;
      uVar8 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    FUN_002e4094(lVar11,lVar1,uVar8);
    pbVar6 = *(byte **)(param_2 + 0x10);
    uVar7 = (ulong)*pbVar6;
    if ((*pbVar6 & 1) == 0) goto LAB_0068ff54;
LAB_0068ffe8:
    if (*(long *)(pbVar6 + 8) != 0) goto LAB_0068fff0;
LAB_00690038:
    iVar3 = *(int *)(param_2 + 0x24);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    if ((uVar7 & 1) != 0) goto LAB_0068ffa8;
LAB_0068ff48:
    pbVar6 = *(byte **)(param_2 + 0x10);
    uVar7 = (ulong)*pbVar6;
    if ((*pbVar6 & 1) != 0) goto LAB_0068ffe8;
LAB_0068ff54:
    if (uVar7 >> 1 == 0) goto LAB_00690038;
LAB_0068fff0:
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar10 = (ulong *)*puVar10;
    }
    pbVar9 = *(byte **)(param_1 + 0x10);
    if (pbVar9 != PTR_DAT_043730c0) {
      if (pbVar9 != pbVar6) {
        uVar8 = *(ulong *)(pbVar6 + 8);
        pbVar2 = *(byte **)(pbVar6 + 0x10);
        if ((uVar7 & 1) == 0) {
          pbVar2 = pbVar6 + 1;
          uVar8 = uVar7 >> 1;
        }
        FUN_00291910(pbVar9,pbVar2,uVar8);
      }
      goto LAB_00690038;
    }
    FUN_0029175c((undefined8 *)(param_1 + 0x10),puVar10);
    iVar3 = *(int *)(param_2 + 0x24);
  }
  if (iVar3 != 3) {
    if (iVar3 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0x24) == 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      if (*(int *)(param_1 + 0x24) == 3) {
        puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar10 = (ulong *)*puVar10;
        }
        if (puVar10 == (ulong *)0x0) {
          FUN_0069dce8(*(undefined8 *)(param_1 + 0x18));
        }
      }
      *(undefined4 *)(param_1 + 0x24) = 2;
      puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar10 = (ulong *)*puVar10;
      }
      uVar4 = FUN_0069d5b4(puVar10);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      if (*(int *)(param_2 + 0x24) != 2) {
        FUN_0068f070(uVar4,PTR_DAT_04375cc8);
        return;
      }
    }
    FUN_0068f070(uVar4,*(undefined8 *)(param_2 + 0x18));
    return;
  }
  if (*(int *)(param_1 + 0x24) == 2) {
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar10 = (ulong *)*puVar10;
    }
    if ((puVar10 == (ulong *)0x0) && (lVar11 = *(long *)(param_1 + 0x18), lVar11 != 0)) {
      FUN_006993c4(lVar11);
      FUN_002e2ea0(PTR_LAB_04373088,lVar11);
    }
LAB_0069011c:
    *(undefined4 *)(param_1 + 0x24) = 3;
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar10 = (ulong *)*puVar10;
    }
    uVar4 = FUN_0069d6c0(puVar10);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    if (*(int *)(param_2 + 0x24) != 3) {
      puVar5 = PTR_DAT_04375c18;
      goto LAB_00690154;
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 3) goto LAB_0069011c;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  puVar5 = *(undefined **)(param_2 + 0x18);
LAB_00690154:
  FUN_0068f158(uVar4,puVar5);
  return;
}


