/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005724a0; name: FUN_005724a0
 */


/* WARNING: Removing unreachable block (ram,0x0057266c) */
/* WARNING: Removing unreachable block (ram,0x00572614) */
/* WARNING: Removing unreachable block (ram,0x0057260c) */
/* WARNING: Removing unreachable block (ram,0x00572acc) */
/* WARNING: Removing unreachable block (ram,0x0057261c) */
/* WARNING: Removing unreachable block (ram,0x00572654) */
/* WARNING: Removing unreachable block (ram,0x00572584) */

undefined8 FUN_005724a0(long param_1,long param_2)

{
  ulong *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  size_t sVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_78 = (ulong *)0x0;
  lVar4 = param_2 + 0x20;
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_60 = 0x6e6f696765720c;
  local_58 = 0;
  local_50 = 0;
                    /* try { // try from 005724ec to 005724f7 has its CatchHandler @ 00572b14 */
  lVar3 = FUN_00572e24(lVar4,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  param_2 = param_2 + 0x28;
  if (param_2 != lVar3) {
    if (*(int *)(lVar3 + 0x38) == 4) {
      lVar12 = *(long *)(param_1 + 0x90);
      pbVar10 = (byte *)(lVar12 + 0x30);
      if ((*pbVar10 & 1) == 0) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
      }
      else {
        **(undefined1 **)(lVar12 + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        if ((*(byte *)(lVar12 + 0x30) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar12 + 0x40));
          *(undefined8 *)(lVar12 + 0x30) = 0;
        }
      }
      uVar13 = *(undefined8 *)(lVar3 + 0x48);
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 *)(lVar12 + 0x38) = uVar13;
      *(undefined8 *)pbVar10 = uVar5;
      *(undefined8 *)(lVar3 + 0x48) = 0;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
    }
    else {
                    /* try { // try from 00572548 to 00572573 has its CatchHandler @ 00572aec */
      FUN_002f2c60(&local_60,"\"region\" field is not a string");
      uVar11 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                            ,0x130,&local_60,0,0);
      local_78 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,8);
      local_68 = local_78 + 1;
      local_70 = local_78 + 1;
      *local_78 = uVar11;
    }
  }
  local_58 = 0;
  local_50 = 0;
  local_60 = 0x656e6f7a08;
                    /* try { // try from 00572698 to 005726a3 has its CatchHandler @ 00572b04 */
  lVar3 = FUN_00572e24(lVar4,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (param_2 != lVar3) {
    if (*(int *)(lVar3 + 0x38) == 4) {
      lVar12 = *(long *)(param_1 + 0x90);
      pbVar10 = (byte *)(lVar12 + 0x48);
      if ((*pbVar10 & 1) == 0) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
      }
      else {
        **(undefined1 **)(lVar12 + 0x58) = 0;
        *(undefined8 *)(lVar12 + 0x50) = 0;
        if ((*(byte *)(lVar12 + 0x48) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar12 + 0x58));
          *(undefined8 *)(lVar12 + 0x48) = 0;
        }
      }
      uVar13 = *(undefined8 *)(lVar3 + 0x48);
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      *(undefined8 *)(lVar12 + 0x58) = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 *)(lVar12 + 0x50) = uVar13;
      *(undefined8 *)pbVar10 = uVar5;
      *(undefined8 *)(lVar3 + 0x48) = 0;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
    }
    else {
                    /* try { // try from 005726f0 to 0057271b has its CatchHandler @ 00572ae8 */
      FUN_002f2c60(&local_60,"\"zone\" field is not a string");
      uVar11 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                            ,0x139,&local_60,0,0);
      if (local_70 < local_68) {
        *local_70 = uVar11;
        local_70 = local_70 + 1;
      }
      else {
        lVar3 = (long)local_70 - (long)local_78 >> 3;
        uVar6 = lVar3 + 1;
        if (uVar6 >> 0x3d != 0) {
                    /* try { // try from 00572ad4 to 00572adb has its CatchHandler @ 00572ae8 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
          uVar8 = (long)local_68 - (long)local_78 >> 2;
          if (uVar6 <= uVar8) {
            uVar6 = uVar8;
          }
          if (uVar6 != 0) goto LAB_005727c8;
          lVar12 = 0;
        }
        else {
          uVar6 = 0x1fffffffffffffff;
LAB_005727c8:
          lVar12 = FUN_002e2e80(PTR_FUN_04373078,uVar6 << 3);
        }
        puVar1 = (ulong *)(lVar12 + lVar3 * 8);
        local_68 = (ulong *)(lVar12 + uVar6 * 8);
        *puVar1 = uVar11;
        sVar7 = (long)local_70 - (long)local_78;
        puVar9 = (ulong *)((long)puVar1 - sVar7);
        if (0 < (long)sVar7) {
          memcpy(puVar9,local_78,sVar7);
        }
        bVar2 = local_78 != (ulong *)0x0;
        local_78 = puVar9;
        local_70 = puVar1 + 1;
        if (bVar2) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
    }
  }
  local_58 = 0;
  local_50 = 0;
  local_60 = 0x656e6f7a6275730e;
                    /* try { // try from 00572840 to 0057284b has its CatchHandler @ 00572af4 */
  lVar4 = FUN_00572e24(lVar4,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if (param_2 == lVar4) {
LAB_005729e0:
    if (local_70 == local_78) goto LAB_005729ec;
  }
  else {
    if (*(int *)(lVar4 + 0x38) == 4) {
      lVar3 = *(long *)(param_1 + 0x90);
      pbVar10 = (byte *)(lVar3 + 0x60);
      if ((*pbVar10 & 1) == 0) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
      }
      else {
        **(undefined1 **)(lVar3 + 0x70) = 0;
        *(undefined8 *)(lVar3 + 0x68) = 0;
        if ((*(byte *)(lVar3 + 0x60) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar3 + 0x70));
          *(undefined8 *)(lVar3 + 0x60) = 0;
        }
      }
      uVar13 = *(undefined8 *)(lVar4 + 0x48);
      uVar5 = *(undefined8 *)(lVar4 + 0x40);
      *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar4 + 0x50);
      *(undefined8 *)(lVar3 + 0x68) = uVar13;
      *(undefined8 *)pbVar10 = uVar5;
      *(undefined8 *)(lVar4 + 0x48) = 0;
      *(undefined8 *)(lVar4 + 0x50) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
    }
    else {
                    /* try { // try from 00572898 to 005728c3 has its CatchHandler @ 00572ae4 */
      FUN_002f2c60(&local_60,"\"subzone\" field is not a string");
      uVar11 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                            ,0x142,&local_60,0,0);
      if (local_68 <= local_70) {
        lVar4 = (long)local_70 - (long)local_78 >> 3;
        uVar6 = lVar4 + 1;
        if (uVar6 >> 0x3d != 0) {
                    /* try { // try from 00572adc to 00572ae3 has its CatchHandler @ 00572ae4 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
          uVar8 = (long)local_68 - (long)local_78 >> 2;
          if (uVar6 <= uVar8) {
            uVar6 = uVar8;
          }
          if (uVar6 != 0) goto LAB_00572988;
          lVar3 = 0;
        }
        else {
          uVar6 = 0x1fffffffffffffff;
LAB_00572988:
          lVar3 = FUN_002e2e80(PTR_FUN_04373078,uVar6 << 3);
        }
        puVar1 = (ulong *)(lVar3 + lVar4 * 8);
        *puVar1 = uVar11;
        sVar7 = (long)local_70 - (long)local_78;
        puVar9 = (ulong *)((long)puVar1 - sVar7);
        if (0 < (long)sVar7) {
          memcpy(puVar9,local_78,sVar7);
        }
        bVar2 = local_78 != (ulong *)0x0;
        local_78 = puVar9;
        local_70 = puVar1 + 1;
        if (bVar2) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
        goto LAB_005729e0;
      }
      *local_70 = uVar11;
      local_70 = local_70 + 1;
    }
    if (local_70 == local_78) {
LAB_005729ec:
      uVar5 = 0;
      goto joined_r0x005729f0;
    }
  }
                    /* try { // try from 00572a20 to 00572a4f has its CatchHandler @ 00572af0 */
  FUN_002f2c60(&local_60,"errors parsing \"locality\" object");
  uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                       ,0x148,&local_60,local_78,(long)local_70 - (long)local_78 >> 3);
  if (local_70 != local_78) {
    uVar11 = 0;
    uVar6 = *local_78;
    while( true ) {
      if (4 < uVar6) {
                    /* try { // try from 00572ab0 to 00572abb has its CatchHandler @ 00572b3c */
        FUN_002f0430(uVar6,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
      }
      uVar11 = uVar11 + 1;
      if ((ulong)((long)local_70 - (long)local_78 >> 3) <= uVar11) break;
      uVar6 = local_78[uVar11];
    }
  }
joined_r0x005729f0:
  if (local_78 != (ulong *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar5;
}


