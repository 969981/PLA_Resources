/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084de14; name: FUN_0084de14
 */


void FUN_0084de14(undefined8 param_1,long *param_2,int *param_3,void *param_4,uint param_5,
                 undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  ulong uVar7;
  int *piVar8;
  void *__src;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  undefined2 *puVar14;
  uint local_88 [6];
  uint local_70 [2];
  uint local_68 [2];
  
  if ((int)param_2[0x99] == *(int *)PTR_DAT_043779d0) {
LAB_0084de4c:
    local_88[0] = 0x10408;
  }
  else if ((param_4 == (void *)0x0) && (param_5 != 0)) {
LAB_0084de78:
    local_88[0] = 0x10407;
  }
  else {
    uVar7 = FUN_0084bbb0(param_2);
    if ((uVar7 & 1) == 0) goto LAB_0084de4c;
    if ((*param_3 == 0) || (param_2[0x9a] == 0)) goto LAB_0084de78;
    if (param_5 == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if (*(ushort *)(param_2 + 0x9c) != 0) {
        uVar11 = (param_5 - 1) / (uint)*(ushort *)(param_2 + 0x9c);
      }
      uVar11 = uVar11 + 1;
    }
    if (uVar11 <= (uint)*(ushort *)(param_2 + 5) - (uint)*(ushort *)((long)param_2 + 0x32)) {
      memset(local_70,0,4);
      lVar9 = param_2[0x7f];
      uVar7 = 0;
      while( true ) {
        if ((lVar9 != 0) &&
           (uVar4 = 1 << (ulong)((uint)uVar7 & 0x1f), (param_3[uVar7 >> 5 & 7] & uVar4) != 0)) {
          local_70[0] = local_70[0] | uVar4;
        }
        if (uVar7 == 0x17) break;
        lVar9 = param_2[uVar7 + 0x80];
        uVar7 = uVar7 + 1;
      }
      if (0 < (int)uVar11) {
        iVar13 = 0;
        do {
          uVar4 = *(int *)((long)param_2 + 0x2c) + (uint)*(ushort *)((long)param_2 + 0x32);
          lVar9 = param_2[4];
          uVar2 = 0;
          if (*(ushort *)(param_2 + 5) <= uVar4) {
            uVar2 = (uint)*(ushort *)(param_2 + 5);
          }
          uVar7 = (ulong)(uVar4 - uVar2);
          puVar14 = (undefined2 *)(lVar9 + uVar7 * 0x5d0);
          *puVar14 = 0;
          *(undefined8 *)(puVar14 + 4) = 0;
          piVar8 = (int *)(puVar14 + 8);
          piVar8[0] = 0;
          piVar8[1] = 0;
          pbVar12 = (byte *)(puVar14 + 0x10);
          pbVar12[0] = 0;
          pbVar12[1] = 0;
          pbVar12[2] = 0;
          pbVar12[3] = 0;
          pbVar12[4] = 0;
          pbVar12[5] = 0;
          pbVar12[6] = 0;
          pbVar12[7] = 0;
          pbVar10 = (byte *)(puVar14 + 0x14);
          *pbVar10 = 0;
          memset(puVar14 + 0x16,0,4);
          *(undefined1 *)puVar14 = 0;
          *pbVar12 = 1;
          uVar3 = *(ushort *)((long)param_2 + 0x32);
          uVar5 = (undefined2)
                  ((ulong)((uint)uVar3 + (uint)*(ushort *)(param_2 + 6)) * 0x800080008001 >> 0x2f);
          puVar14[0x12] = uVar5;
          *(ushort *)((long)param_2 + 0x32) = uVar3 + 1;
          if (param_6 != (undefined2 *)0x0) {
            *param_6 = uVar5;
          }
          uVar4 = param_5;
          if (*(ushort *)(param_2 + 0x9c) <= param_5) {
            uVar4 = (uint)*(ushort *)(param_2 + 0x9c);
          }
          __src = param_4;
          uVar2 = uVar4;
          if ((*(char *)((long)param_2 + 0x51c) != '\0') &&
             (FUN_00846d20(local_88,param_2[0x9a],param_4,uVar4 & 0xffff), local_88[0] == 0)) {
            *pbVar12 = *pbVar12 | 0x10;
            __src = *(void **)(param_2[0x9a] + 0x28);
            uVar2 = *(uint *)(param_2[0x9a] + 0x30);
          }
          if (iVar13 == 0) {
            *pbVar12 = *pbVar12 | 2;
          }
          if (uVar11 + iVar13 == 1) {
            *pbVar12 = *pbVar12 | 4;
          }
          puVar14[0x11] = (short)uVar2;
          memcpy(puVar14 + 0x16,local_70,4);
          bVar6 = (**(code **)(*param_2 + 0x38))(param_2);
          uVar1 = bVar6 + 0x1f >> 3 & 0x3c;
          *pbVar10 = bVar6;
          if ((uVar2 & 0xffff) <= 0x597 - uVar1) {
            memcpy((void *)(lVar9 + uVar7 * 0x5d0 + (ulong)(uVar1 + 9) + 0x30),__src,
                   (ulong)uVar2 & 0xffff);
          }
          param_4 = (void *)((long)param_4 + (ulong)(ushort)uVar4);
          param_5 = param_5 - (uVar4 & 0xffff);
          memcpy(local_88,local_70,4);
          local_88[0] = local_88[0] & *(uint *)(param_2 + 0x9e);
          if ((iVar13 == 0) && (local_88[0] != 0)) {
            memcpy(local_68,local_70,4);
            *(uint *)(param_2 + 0x9e) = *(uint *)(param_2 + 0x9e) & (local_68[0] ^ 0xffffffff);
            *pbVar12 = *pbVar12 | 8;
            local_68[0] = ~local_68[0];
          }
          iVar13 = iVar13 + -1;
          *piVar8 = (uVar2 & 0xffff) + (*pbVar10 + 0x1f >> 3 & 0x3c) + 9;
          *(undefined1 *)puVar14 = 1;
        } while (uVar11 + iVar13 != 0);
      }
      sprintf((char *)local_88,"%08x",(ulong)local_70[0]);
      local_88[0] = 0;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
      goto LAB_0084dea0;
    }
    local_88[0] = 0x4c0d;
  }
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
LAB_0084dea0:
  FUN_007ee578(param_1,local_88);
  return;
}


