/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013119c4; name: FUN_013119c4
 */


void FUN_013119c4(long *param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  float *pfVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float local_3c [3];
  
  plVar1 = param_1 + 0x3c1;
  uVar7 = 1;
  if ((char)*plVar1 != '\0') {
    uVar7 = 2;
  }
  *(undefined4 *)(*(long *)(param_1[0xb8] + 0x188) + 0x30) = uVar7;
  FUN_01308e60(*(undefined8 *)(param_1[0xb8] + 0x188),(char)param_1[0x1ab],1,
               *(undefined1 *)((long)param_1 + 0xd59),*(undefined1 *)((long)param_1 + 0xd5a),
               *(undefined1 *)((long)param_1 + 0xd5b));
  FUN_00d42690(param_1,1,1);
  *(undefined8 *)((long)param_1 + 0x5b4) = 1;
  if ((char)*plVar1 == '\0') {
    cVar2 = *(char *)(param_1[0xb8] + 0x94);
    *(char *)((long)param_1 + 0x1e3d) = cVar2;
    if (cVar2 == '\0') {
      *(undefined1 *)((long)param_1 + 0x1e3c) = 1;
      bVar3 = false;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x1e3c) = 0;
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
    *(undefined1 *)((long)param_1 + 0x1e3d) = 0;
  }
  if ((char)*plVar1 == '\0') {
    if (*(char *)((long)param_1 + 0x1e3c) == '\0') {
      fVar8 = 1.0;
      fVar9 = 1.5;
      puVar6 = &DAT_03a7abe8;
      local_3c[1] = 1.5;
      local_3c[2] = 1.0;
      puVar5 = &UNK_03a7aba0;
    }
    else {
      local_3c[1] = 1.0;
      local_3c[2] = 0.75;
      puVar6 = &DAT_03a7ab58;
      fVar8 = 0.75;
      puVar5 = &DAT_03a7aaf0;
      fVar9 = 1.0;
    }
    if (!bVar3) {
      puVar5 = puVar6;
    }
  }
  else {
    local_3c[1] = 1.0;
    local_3c[2] = 0.75;
    fVar8 = 0.75;
    fVar9 = 1.0;
    puVar5 = &DAT_03a7ab58;
    if (bVar3) {
      puVar5 = &DAT_03a7aaf0;
    }
  }
  local_3c[0] = *(float *)(puVar5 + 4);
  pfVar4 = local_3c + 1;
  if (local_3c[0] <= fVar9) {
    pfVar4 = local_3c;
  }
  if (local_3c[0] < fVar8) {
    pfVar4 = local_3c + 2;
  }
  *(float *)(param_1 + 0x3c6) = *pfVar4;
  (**(code **)(*param_1 + 0xb0))(param_1,param_2 & 1);
  FUN_0131b918(*(undefined8 *)(param_1[0xb8] + 0x78),(char)*plVar1);
  return;
}


