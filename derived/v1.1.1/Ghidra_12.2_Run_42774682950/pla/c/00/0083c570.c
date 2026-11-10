/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083c570; name: FUN_0083c570
 */


undefined8 FUN_0083c570(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 local_88 [4];
  int local_78 [8];
  undefined4 local_58 [2];
  
  puVar2 = PTR_DAT_04377550;
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  lVar1 = *(long *)PTR_DAT_04377550 + 0x178;
  uVar7 = FUN_0083fd98(lVar1);
  uVar3 = FUN_0083fda0(lVar1);
  uVar4 = FUN_0083fd80(lVar1);
  uVar5 = FUN_0083fd8c(lVar1);
  FUN_0083fd74(local_78,lVar1);
  lVar8 = FUN_008372b8(uVar10,uVar7,uVar3,uVar4,uVar5 & 1,local_78,1,0,0);
  if (lVar8 == 0) {
    local_78[0] = 0x10408;
  }
  else {
    lVar11 = *(long *)puVar2;
    uVar7 = FUN_0082b2e0(lVar11);
    FUN_00825c28(lVar8,uVar7);
    FUN_00825d4c(lVar8,lVar1);
    *(undefined1 *)(lVar8 + 0x360) = 0;
    if (*(char *)(lVar11 + 0x458) != '\0') {
      uVar13 = 0;
      lVar12 = lVar11 + 0x1f8;
      do {
        FUN_00825d80(lVar8,lVar12);
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x98;
      } while (uVar13 < *(byte *)(lVar11 + 0x458));
    }
    if (*(char *)(lVar11 + 0x459) == '\0') {
      uVar9 = 1;
    }
    else {
      uVar9 = *(undefined1 *)(lVar8 + 0x360);
    }
    *(undefined1 *)(lVar8 + 0x361) = uVar9;
    *(undefined2 *)(lVar8 + 0xf8) = 0;
    lVar11 = *(long *)puVar2;
    FUN_0083fdc0(lVar8 + 0x98,*(undefined4 *)(lVar11 + 0x158),*(undefined1 *)(lVar11 + 0x171));
    uVar4 = FUN_0083794c(*(undefined8 *)(param_1 + 0x58));
    uVar5 = FUN_0082f0d8(*(undefined8 *)PTR_DAT_04377ce8,lVar8,uVar4);
    puVar2 = PTR_DAT_043773c0;
    if (((uint)(byte)*PTR_DAT_04377cd0 != (uVar5 & 0xff)) ||
       ((uint)(byte)PTR_DAT_04377cd0[1] != (uVar5 >> 8 & 0xff))) {
      lVar11 = *(long *)PTR_DAT_043773c0;
      uVar7 = FUN_0083fd98(lVar1);
      uVar6 = FUN_0083fda0(lVar1);
      uVar10 = FUN_0083fd98(lVar1);
      FUN_00847ca4(local_78,lVar11 + 0x10,uVar4,uVar7,uVar6,uVar10);
      if (local_78[0] == 0) {
        FUN_00837994(*(undefined8 *)(param_1 + 0x58),uVar4);
        FUN_008401a4(*(long *)(param_1 + 0x58) + 0x180);
        *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x780) = 1;
        *(undefined4 *)(lVar8 + 0x3c) = 2;
        FUN_00854f64(*(undefined8 *)puVar2);
        local_88[0] = 0;
        local_58[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_58);
        FUN_007ee660(param_1 + 0x68,local_88);
        puVar2 = PTR_DAT_043773b8;
        *(undefined4 *)(PTR_DAT_043773b8 + 0x3dc) = 0xffffffff;
        puVar2[0x3f0] = 0;
        puVar2[0x3f7] = (char)uVar5;
        puVar2[0x3d8] = 1;
      }
      else {
        local_88[0] = 0x10408;
        local_58[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_58);
        FUN_007ee660(param_1 + 0x68,local_88);
      }
      goto LAB_0083c81c;
    }
    local_78[0] = 0x6475;
  }
  local_88[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
  FUN_007ee660(param_1 + 0x68,local_78);
LAB_0083c81c:
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377ed8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "CreateMeshJob::SendMonitoringData";
  return 0;
}


