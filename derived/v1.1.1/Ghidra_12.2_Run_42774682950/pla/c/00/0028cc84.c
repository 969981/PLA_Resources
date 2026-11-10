/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028cc84; name: FUN_0028cc84
 */


void FUN_0028cc84(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined2 uVar6;
  long lVar7;
  long local_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04373038;
  if (*(long *)PTR_DAT_04373038 != 0) {
    FUN_00271770("Texture Sampler Table Already Created.\n");
    return;
  }
  *(undefined4 *)PTR_DAT_04373040 = 0x20;
  local_a0 = (**(code **)(*param_2 + 0x10))(param_2,0x1500,0x80);
  iVar5 = 0;
  *(long *)puVar3 = local_a0;
  do {
    lVar7 = 0;
    cVar4 = '\0';
    do {
      puVar1 = (undefined1 *)(local_a0 + lVar7);
      *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
      FUN_0087cb74(puVar1 + 0x30);
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      puVar1[0x10] = cVar4;
      puVar1[0x11] = 0;
      uVar2 = (undefined1)iVar5;
      puVar1[0x12] = uVar2;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined8 *)(puVar1 + 0x1b) = 0;
      *(undefined8 *)(puVar1 + 0x13) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_00876c24(&local_80);
      uVar6 = 0x2a;
      if (puVar1[0x12] != '\0') {
        uVar6 = 0x15;
      }
      local_80 = CONCAT26(uVar6,(undefined6)local_80);
      if ((byte)puVar1[0x10] < 4) {
        local_80 = CONCAT71(local_80._1_7_,
                            (char)(0x4020001 >> (ulong)(((byte)puVar1[0x10] & 3) << 3)));
      }
      if ((byte)puVar1[0x11] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0x11] & 3) << 3)),
                      (undefined1)local_80);
      }
      local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
      FUN_0087cb9c(puVar1 + 0x30,param_1,&local_80);
      *puVar1 = 1;
      *(undefined8 *)(puVar1 + 0xd0) = 0xffffffffffffffff;
      FUN_0087cb74(puVar1 + 0xd8);
      puVar1[0xa8] = 0;
      *(undefined8 *)(puVar1 + 0xb0) = 0;
      puVar1[0xb8] = cVar4;
      puVar1[0xb9] = 1;
      puVar1[0xba] = uVar2;
      *(undefined8 *)(puVar1 + 0xbb) = 0;
      *(undefined8 *)(puVar1 + 0xc3) = 0;
      *(undefined8 *)(puVar1 + 200) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_00876c24(&local_80);
      uVar6 = 0x2a;
      if (puVar1[0xba] != '\0') {
        uVar6 = 0x15;
      }
      local_80 = CONCAT26(uVar6,(undefined6)local_80);
      if ((byte)puVar1[0xb8] < 4) {
        local_80 = CONCAT71(local_80._1_7_,
                            (char)(0x4020001 >> (ulong)(((byte)puVar1[0xb8] & 3) << 3)));
      }
      if ((byte)puVar1[0xb9] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0xb9] & 3) << 3)),
                      (undefined1)local_80);
      }
      local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
      FUN_0087cb9c(puVar1 + 0xd8,param_1,&local_80);
      puVar1[0xa8] = 1;
      *(undefined8 *)(puVar1 + 0x178) = 0xffffffffffffffff;
      FUN_0087cb74(puVar1 + 0x180);
      puVar1[0x161] = 2;
      puVar1[0x150] = 0;
      *(undefined8 *)(puVar1 + 0x158) = 0;
      puVar1[0x160] = cVar4;
      puVar1[0x162] = uVar2;
      *(undefined8 *)(puVar1 + 0x163) = 0;
      *(undefined8 *)(puVar1 + 0x16b) = 0;
      *(undefined8 *)(puVar1 + 0x170) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_00876c24(&local_80);
      uVar6 = 0x2a;
      if (puVar1[0x162] != '\0') {
        uVar6 = 0x15;
      }
      local_80 = CONCAT26(uVar6,(undefined6)local_80);
      if ((byte)puVar1[0x160] < 4) {
        local_80 = CONCAT71(local_80._1_7_,
                            (char)(0x4020001 >> (ulong)(((byte)puVar1[0x160] & 3) << 3)));
      }
      if ((byte)puVar1[0x161] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0x161] & 3) << 3)),
                      (undefined1)local_80);
      }
      local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
      FUN_0087cb9c(puVar1 + 0x180,param_1,&local_80);
      puVar1[0x150] = 1;
      *(undefined8 *)(puVar1 + 0x220) = 0xffffffffffffffff;
      FUN_0087cb74(puVar1 + 0x228);
      puVar1[0x209] = 3;
      puVar1[0x1f8] = 0;
      *(undefined8 *)(puVar1 + 0x200) = 0;
      puVar1[0x208] = cVar4;
      puVar1[0x20a] = uVar2;
      *(undefined8 *)(puVar1 + 0x20b) = 0;
      *(undefined8 *)(puVar1 + 0x213) = 0;
      *(undefined8 *)(puVar1 + 0x218) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_00876c24(&local_80);
      uVar6 = 0x2a;
      if (puVar1[0x20a] != '\0') {
        uVar6 = 0x15;
      }
      local_80 = CONCAT26(uVar6,(undefined6)local_80);
      if ((byte)puVar1[0x208] < 4) {
        local_80 = CONCAT71(local_80._1_7_,
                            (char)(0x4020001 >> (ulong)(((byte)puVar1[0x208] & 3) << 3)));
      }
      if ((byte)puVar1[0x209] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0x209] & 3) << 3)),
                      (undefined1)local_80);
      }
      local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
      FUN_0087cb9c(puVar1 + 0x228,param_1,&local_80);
      lVar7 = lVar7 + 0x2a0;
      cVar4 = cVar4 + '\x01';
      puVar1[0x1f8] = 1;
    } while ((int)lVar7 != 0xa80);
    iVar5 = iVar5 + 1;
    local_a0 = local_a0 + lVar7;
  } while (iVar5 != 2);
  return;
}


