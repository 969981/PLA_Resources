/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00698fa0; name: FUN_00698fa0
 */


byte * FUN_00698fa0(long param_1,byte *param_2,long param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auVar13 [12];
  byte *local_48;
  
  local_48 = param_2;
  uVar8 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)(param_3 + 0x5c));
  puVar7 = PTR_DAT_043730c0;
  if ((uVar8 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      bVar4 = *local_48;
      auVar13[8] = bVar4;
      auVar13._0_8_ = local_48 + 1;
      auVar13._9_3_ = 0;
      if ((char)bVar4 < '\0') {
        bVar3 = local_48[1];
        iVar5 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        if ((char)bVar3 < '\0') {
          auVar13 = FUN_00323230(local_48,iVar5);
          if (auVar13._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar13._8_4_ = iVar5;
          auVar13._0_8_ = local_48 + 2;
        }
      }
      uVar6 = auVar13._8_4_;
      local_48 = auVar13._0_8_;
      if (uVar6 == 10) {
        puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) == 0) {
          pbVar12 = (byte *)*puVar2;
        }
        else {
          puVar10 = (ulong *)*puVar10;
          pbVar12 = (byte *)*puVar2;
        }
        if (pbVar12 == puVar7) {
          FUN_0029175c(puVar2,puVar10,puVar7);
          pbVar12 = (byte *)*puVar2;
        }
        local_48 = (byte *)FUN_003234c0(pbVar12,local_48,param_3);
        bVar4 = *pbVar12;
        pbVar11 = *(byte **)(pbVar12 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar11 = pbVar12 + 1;
        }
        if ((bVar4 & 1) == 0) {
          uVar8 = (ulong)(bVar4 >> 1);
        }
        else {
          uVar8 = *(ulong *)(pbVar12 + 8);
          if ((long)uVar8 < 0) {
            FUN_0031f284(uVar8,"size_t to int conversion");
          }
        }
        uVar8 = FUN_00323380(pbVar11,uVar8,0);
        if (local_48 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar12 = (byte *)(uVar8 & 1);
      }
      else {
        if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
          *(uint *)(param_3 + 0x50) = uVar6 - 1;
          return local_48;
        }
        if ((*puVar1 & 1) == 0) {
          lVar9 = FUN_0033aecc(puVar1);
        }
        else {
          lVar9 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        local_48 = (byte *)FUN_00323c60(uVar6,lVar9,local_48,param_3);
        pbVar12 = local_48;
      }
      if (pbVar12 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar8 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)(param_3 + 0x5c));
    } while ((uVar8 & 1) == 0);
  }
  return local_48;
}


