/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a3510; name: FUN_007a3510
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_007a3510(long param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  byte *local_48;
  
  local_48 = param_2;
  uVar6 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)(param_3 + 0x5c));
  puVar5 = PTR_DAT_043730c0;
  if ((uVar6 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar2 = (ulong *)(param_1 + 8);
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      bVar4 = *local_48;
      uVar8 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        bVar4 = local_48[1];
        uVar8 = (uVar8 + (uint)bVar4 * 0x80) - 0x80;
        if ((char)bVar4 < '\0') {
          auVar13 = FUN_00323230(local_48,uVar8);
          local_48 = auVar13._0_8_;
          uVar8 = auVar13._8_4_;
          if (local_48 == (byte *)0x0) {
            return (byte *)0x0;
          }
          uVar10 = (uint)(auVar13._8_8_ >> 3) & 0x1fffffff;
        }
        else {
          local_48 = local_48 + 2;
          uVar10 = uVar8 >> 3;
        }
      }
      else {
        uVar10 = (uint)(bVar4 >> 3);
        local_48 = local_48 + 1;
      }
      if (uVar10 == 2) {
        if ((uVar8 & 0xff) == 0x12) {
          puVar9 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) == 0) {
            pbVar12 = (byte *)*puVar1;
          }
          else {
            puVar9 = (ulong *)*puVar9;
            pbVar12 = (byte *)*puVar1;
          }
          if (pbVar12 == puVar5) {
            FUN_0029175c(puVar1,puVar9,puVar5);
            pbVar12 = (byte *)*puVar1;
          }
          goto LAB_007a3624;
        }
LAB_007a3654:
        if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
          *(uint *)(param_3 + 0x50) = uVar8 - 1;
          return local_48;
        }
        if ((*puVar2 & 1) == 0) {
          lVar7 = FUN_0033aecc(puVar2);
        }
        else {
          lVar7 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        local_48 = (byte *)FUN_00323c60(uVar8,lVar7,local_48,param_3);
        pbVar12 = local_48;
      }
      else {
        if ((uVar10 != 1) || ((uVar8 & 0xff) != 10)) goto LAB_007a3654;
        puVar9 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) {
          pbVar12 = (byte *)*puVar3;
        }
        else {
          puVar9 = (ulong *)*puVar9;
          pbVar12 = (byte *)*puVar3;
        }
        if (pbVar12 == puVar5) {
          FUN_0029175c(puVar3,puVar9,puVar5);
          pbVar12 = (byte *)*puVar3;
        }
LAB_007a3624:
        local_48 = (byte *)FUN_003234c0(pbVar12,local_48,param_3);
        bVar4 = *pbVar12;
        pbVar11 = *(byte **)(pbVar12 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar11 = pbVar12 + 1;
        }
        if ((bVar4 & 1) == 0) {
          uVar6 = (ulong)(bVar4 >> 1);
        }
        else {
          uVar6 = *(ulong *)(pbVar12 + 8);
          if ((long)uVar6 < 0) {
            FUN_0031f284(uVar6,"size_t to int conversion");
          }
        }
        uVar6 = FUN_00323380(pbVar11,uVar6,0);
        if (local_48 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar12 = (byte *)(uVar6 & 1);
      }
      if (pbVar12 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar6 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)(param_3 + 0x5c));
    } while ((uVar6 & 1) == 0);
  }
  return local_48;
}


