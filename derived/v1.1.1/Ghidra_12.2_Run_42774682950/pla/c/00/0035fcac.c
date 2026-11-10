/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035fcac; name: FUN_0035fcac
 */


undefined8 FUN_0035fcac(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 **__n;
  undefined8 **ppuVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  byte *__s2;
  undefined8 **ppuVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined8 **ppuVar13;
  undefined8 ***local_78 [2];
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 **ppuStack_58;
  byte *local_50;
  undefined8 *local_48;
  undefined8 *local_38;
  
  puVar7 = (ulong *)param_2[6];
  if ((puVar7 != (ulong *)0x0) && (local_38 = param_2, *puVar7 != 0xffffffffffffffff)) {
    ppuStack_58 = &local_38;
    local_60 = (undefined8 **)PTR_LAB_04373a98;
    local_78[0] = &local_60;
    std::__call_once(puVar7,local_78,(_func_void_void_ptr *)PTR_LAB_04373b88);
  }
  puVar11 = (undefined8 *)param_2[0xd];
  if (*(int *)(puVar11 + 0x10) != 0) {
    return 0;
  }
  if (*(int *)((long)param_2 + 0x3c) != 3) {
    return 0;
  }
  if (*(int *)((long)puVar11 + 0x7c) != 0) {
    return 0;
  }
  if (*(int *)((long)puVar11 + 0x74) != 0) {
    return 0;
  }
  if (*(int *)(puVar11 + 0xf) != 0) {
    return 0;
  }
  if (*(int *)(puVar11 + 0xd) != 2) {
    return 0;
  }
  pbVar12 = (byte *)*puVar11;
  FUN_00358e90(local_78,*param_2,0);
                    /* try { // try from 0035fd5c to 0035fd6f has its CatchHandler @ 003600b8 */
  puVar8 = (undefined8 *)FUN_002e4094(local_78,"Entry",5);
  ppuStack_58 = (undefined8 **)puVar8[1];
  ppuVar13 = (undefined8 **)*puVar8;
  local_50 = (byte *)puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  bVar3 = *pbVar12;
  ppuVar9 = (undefined8 **)(ulong)(bVar3 >> 1);
  __n = ppuVar9;
  if ((bVar3 & 1) != 0) {
    __n = *(undefined8 ***)(pbVar12 + 8);
  }
  ppuVar1 = (undefined8 **)((ulong)ppuVar13 >> 1 & 0x7f);
  if (((ulong)ppuVar13 & 1) != 0) {
    ppuVar1 = ppuStack_58;
  }
  local_60 = ppuVar13;
  if (__n == ppuVar1) {
    pbVar10 = *(byte **)(pbVar12 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar10 = pbVar12 + 1;
    }
    __s2 = (byte *)((ulong)&local_60 | 1);
    if (((ulong)ppuVar13 & 1) != 0) {
      __s2 = local_50;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != (undefined8 **)0x0) {
        do {
          pbVar12 = pbVar12 + 1;
          if (*pbVar12 != *__s2) goto LAB_0035fe14;
          ppuVar9 = (undefined8 **)((long)ppuVar9 + -1);
          __s2 = __s2 + 1;
        } while (ppuVar9 != (undefined8 **)0x0);
      }
    }
    else if (__n != (undefined8 **)0x0) {
      iVar6 = memcmp(pbVar10,__s2,(size_t)__n);
      if (iVar6 != 0) goto LAB_0035fe14;
    }
    bVar5 = param_2[10] != puVar11[3];
  }
  else {
LAB_0035fe14:
    bVar5 = true;
  }
  if (((ulong)ppuVar13 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (((ulong)local_78[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  if (!bVar5) {
    puVar8 = (undefined8 *)FUN_00343030(puVar11);
    puVar11 = (undefined8 *)FUN_003430c8(puVar11);
    if ((*(int *)((long)puVar8 + 0x3c) == 1) && (*(int *)((long)puVar8 + 0x44) == 1)) {
      pbVar12 = (byte *)*puVar8;
      bVar3 = *pbVar12;
      uVar2 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar12 + 8);
      }
      if (uVar2 == 3) {
        pbVar10 = *(byte **)(pbVar12 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar10 = pbVar12 + 1;
        }
        if (((*(short *)pbVar10 == 0x656b && pbVar10[2] == 0x79) &&
            (*(int *)((long)puVar11 + 0x3c) == 1)) && (*(int *)((long)puVar11 + 0x44) == 2)) {
          pbVar12 = (byte *)*puVar11;
          bVar3 = *pbVar12;
          uVar2 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar2 = *(ulong *)(pbVar12 + 8);
          }
          if (uVar2 == 5) {
            pbVar10 = *(byte **)(pbVar12 + 0x10);
            if ((bVar3 & 1) == 0) {
              pbVar10 = pbVar12 + 1;
            }
            if (*(int *)pbVar10 == 0x756c6176 && pbVar10[4] == 0x65) {
              puVar7 = (ulong *)puVar8[6];
              if (puVar7 != (ulong *)0x0) {
                local_38 = (undefined8 *)PTR_LAB_04373a98;
                local_48 = puVar8;
                if (*puVar7 != 0xffffffffffffffff) {
                  local_60 = &local_38;
                  ppuStack_58 = &local_48;
                  local_78[0] = &local_60;
                  std::__call_once(puVar7,local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
                }
              }
              uVar4 = *(int *)(puVar8 + 7) - 1;
              if ((uVar4 < 0xe) && ((0x2e03U >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
                FUN_0034dc2c(param_1,param_2[1],param_3,2,
                             (&PTR_s_Key_in_map_fields_cannot_be_floa_04153b78)[(int)uVar4]);
              }
              puVar7 = (ulong *)puVar11[6];
              if (puVar7 != (ulong *)0x0) {
                local_38 = (undefined8 *)PTR_LAB_04373a98;
                local_48 = puVar11;
                if (*puVar7 != 0xffffffffffffffff) {
                  local_60 = &local_38;
                  ppuStack_58 = &local_48;
                  local_78[0] = &local_60;
                  std::__call_once(puVar7,local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
                }
              }
              if (*(int *)(puVar11 + 7) == 0xe) {
                puVar7 = (ulong *)puVar11[6];
                if ((puVar7 != (ulong *)0x0) && (local_38 = puVar11, *puVar7 != 0xffffffffffffffff))
                {
                  ppuStack_58 = &local_38;
                  local_60 = (undefined8 **)PTR_LAB_04373a98;
                  local_78[0] = &local_60;
                  std::__call_once(puVar7,local_78,(_func_void_void_ptr *)PTR_LAB_04373b88);
                }
                if (*(int *)(*(long *)(puVar11[0xe] + 0x30) + 0x10) != 0) {
                  FUN_0034dc2c(param_1,param_2[1],param_3,2,
                               "Enum value in map must define 0 as the first value.");
                }
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


