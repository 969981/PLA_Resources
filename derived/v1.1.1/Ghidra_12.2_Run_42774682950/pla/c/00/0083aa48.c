/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083aa48; name: FUN_0083aa48
 */


undefined8 FUN_0083aa48(long param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  undefined1 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int local_a0 [4];
  undefined4 local_90 [4];
  int local_80 [4];
  undefined8 local_70;
  
  puVar1 = PTR_DAT_04377550;
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    FUN_007e5d18();
    *(undefined8 *)(param_1 + 0x60) = 0;
    PTR_DAT_043773b8[0x3f3] = (char)*(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  lVar14 = *(long *)PTR_DAT_04377550 + 0x178;
  uVar6 = FUN_0083fd98(lVar14);
  uVar2 = FUN_0083fda0(lVar14);
  uVar3 = FUN_0083fd80(lVar14);
  uVar4 = FUN_0083fd8c(lVar14);
  FUN_0083fd74(&local_70,lVar14);
  lVar7 = FUN_008372b8(uVar12,uVar6,uVar2,uVar3,uVar4 & 1,&local_70,1,0,0);
  if (lVar7 == 0) {
    local_90[0] = 0x10408;
    local_70 = local_70 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)&local_70);
    FUN_007ee578(local_80,local_90);
    FUN_007ee660(param_1 + 0xac,local_80);
    if (local_80[0] != 0) goto LAB_0083ac9c;
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    piVar9 = local_80;
LAB_0083ad30:
    FUN_007ee578(&local_70,piVar9);
    FUN_0083a790(uVar6,&local_70);
  }
  else {
    lVar13 = *(long *)puVar1;
    uVar6 = FUN_0082b2e0(lVar13);
    FUN_00825c28(lVar7,uVar6);
    FUN_00825d4c(lVar7,lVar14);
    *(undefined1 *)(lVar7 + 0x360) = 0;
    if (*(char *)(lVar13 + 0x458) != '\0') {
      uVar15 = 0;
      lVar14 = lVar13 + 0x1f8;
      do {
        FUN_00825d80(lVar7,lVar14);
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x98;
      } while (uVar15 < *(byte *)(lVar13 + 0x458));
    }
    if (*(char *)(lVar13 + 0x459) == '\0') {
      uVar10 = 1;
    }
    else {
      uVar10 = *(undefined1 *)(lVar7 + 0x360);
    }
    *(undefined1 *)(lVar7 + 0x361) = uVar10;
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    lVar14 = *(long *)puVar1 + 0x1b8;
    uVar6 = FUN_0083fd98(lVar14);
    uVar2 = FUN_0083fda0(lVar14);
    uVar3 = FUN_0083fd80(lVar14);
    uVar4 = FUN_0083fd8c(lVar14);
    FUN_0083fd74(&local_70,lVar14);
    lVar7 = FUN_008372b8(uVar12,uVar6,uVar2,uVar3,uVar4 & 1,&local_70,0,0,0);
    if (lVar7 != 0) {
      if (*(char *)(lVar13 + 0x459) == '\0') {
        uVar10 = 1;
      }
      else {
        uVar10 = *(undefined1 *)(lVar7 + 0x360);
      }
      *(undefined1 *)(lVar7 + 0x361) = uVar10;
      FUN_00825d4c(lVar7,lVar14);
      iVar5 = FUN_00834104(*(undefined8 *)(param_1 + 0x58));
      plVar8 = (long *)FUN_007ecfa4();
      lVar14 = *plVar8;
      local_70 = 0;
      FUN_007ecf14(&local_70);
      *(ulong *)(param_1 + 0x80) = local_70 + lVar14 * (iVar5 + 8000);
      FUN_008401a4(*(long *)(param_1 + 0x58) + 0x180);
      puVar1 = PTR_FUN_04377e48;
      *(undefined4 *)(param_1 + 0x98) = 2;
      pcVar11 = "JoinMeshJob::SendJoinRequest";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_0083ad58;
    }
    local_90[0] = 0x10408;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)&local_70);
    FUN_007ee578(local_a0,local_90);
    FUN_007ee660(param_1 + 0xac,local_a0);
    if (local_a0[0] == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      piVar9 = local_a0;
      goto LAB_0083ad30;
    }
LAB_0083ac9c:
    PTR_DAT_043773b8[0x3f3] = (char)*(undefined4 *)(param_1 + 0x98);
  }
  *(undefined **)(param_1 + 0x30) = PTR_LAB_04377e50;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar11 = "JoinMeshJob::SendMonitoringData";
LAB_0083ad58:
  *(char **)(param_1 + 0x40) = pcVar11;
  return 0;
}


