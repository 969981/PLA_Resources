/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00507790; name: FUN_00507790
 */


/* WARNING: Removing unreachable block (ram,0x00507914) */
/* WARNING: Removing unreachable block (ram,0x005078bc) */
/* WARNING: Removing unreachable block (ram,0x005078b4) */
/* WARNING: Removing unreachable block (ram,0x00507b94) */
/* WARNING: Removing unreachable block (ram,0x005078c4) */
/* WARNING: Removing unreachable block (ram,0x005078fc) */
/* WARNING: Removing unreachable block (ram,0x00507864) */
/* WARNING: Removing unreachable block (ram,0x00507880) */

undefined8 FUN_00507790(long param_1)

{
  bool bVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *local_98;
  ulong *local_90;
  ulong *local_88;
  byte local_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined4 local_77;
  undefined1 local_73;
  undefined2 uStack_72;
  undefined8 local_70;
  
  uStack_72 = 0;
  local_80 = 0x18;
  local_77 = 0x6769666e;
  local_90 = (ulong *)0x0;
  local_88 = (ulong *)0x0;
  local_98 = (ulong *)0x0;
  local_70 = 0;
  local_73 = 0;
  uStack_7f = s_methodConfig_038c9862._0_7_;
  cStack_78 = s_methodConfig_038c9862[7];
                    /* try { // try from 005077ec to 005077f3 has its CatchHandler @ 00507bdc */
  lVar4 = FUN_00500624(param_1 + 0x50,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if (param_1 + 0x58 != lVar4) {
    if (*(int *)(lVar4 + 0x38) != 6) {
                    /* try { // try from 00507828 to 00507853 has its CatchHandler @ 00507bbc */
      FUN_002f2c60(&local_80,"field:methodConfig error:not of type Array");
      uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                           ,0x89,&local_80,0,0);
      local_98 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,8);
      local_88 = local_98 + 1;
      local_90 = local_98 + 1;
      *local_98 = uVar5;
    }
    puVar3 = PTR_FUN_04373078;
    piVar10 = *(int **)(lVar4 + 0x70);
    piVar2 = *(int **)(lVar4 + 0x78);
    if (piVar10 != piVar2) {
      if (*piVar10 == 5) goto LAB_00507984;
LAB_005079c0:
                    /* try { // try from 005079c0 to 005079e3 has its CatchHandler @ 00507c34 */
      FUN_002f2c60(&local_80,"field:methodConfig error:not of type Object");
      uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                           ,0x8e,&local_80,0,0);
      if (local_90 < local_88) goto LAB_0050795c;
      lVar4 = (long)local_90 - (long)local_98 >> 3;
      uVar7 = lVar4 + 1;
      if (uVar7 >> 0x3d != 0) {
                    /* try { // try from 00507b84 to 00507b8b has its CatchHandler @ 00507bac */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
LAB_00507a0c:
      if ((ulong)((long)local_88 - (long)local_98 >> 3) < 0xfffffffffffffff) {
        uVar8 = (long)local_88 - (long)local_98 >> 2;
        if (uVar7 <= uVar8) {
          uVar7 = uVar8;
        }
        if (uVar7 != 0) goto LAB_00507a34;
        lVar6 = 0;
      }
      else {
        uVar7 = 0x1fffffffffffffff;
LAB_00507a34:
        lVar6 = FUN_002e2e80(puVar3,uVar7 << 3);
      }
      puVar11 = (ulong *)(lVar6 + lVar4 * 8);
      local_88 = (ulong *)(lVar6 + uVar7 * 8);
      puVar12 = puVar11 + 1;
      *puVar11 = uVar5;
      __n = (long)local_90 - (long)local_98;
      puVar11 = (ulong *)((long)puVar11 - __n);
      if (0 < (long)__n) {
        memcpy(puVar11,local_98,__n);
      }
      bVar1 = local_98 == (ulong *)0x0;
      local_98 = puVar11;
      local_90 = puVar12;
      if (bVar1) goto LAB_0050796c;
      FUN_002e2ea0(PTR_LAB_04373088);
      piVar10 = piVar10 + 0x14;
      if (piVar2 != piVar10) {
        do {
          if (*piVar10 != 5) goto LAB_005079c0;
LAB_00507984:
                    /* try { // try from 00507984 to 0050798f has its CatchHandler @ 00507c24 */
          uVar5 = FUN_00507f28(param_1,piVar10);
          if (uVar5 != 0) {
            if (local_90 == local_88) goto code_r0x005079a4;
LAB_0050795c:
            *local_90 = uVar5;
            local_90 = local_90 + 1;
          }
LAB_0050796c:
          piVar10 = piVar10 + 0x14;
          if (piVar2 == piVar10) break;
        } while( true );
      }
    }
  }
  if (local_90 == local_98) {
    uVar9 = 0;
  }
  else {
                    /* try { // try from 00507adc to 00507b0b has its CatchHandler @ 00507bcc */
    FUN_002f2c60(&local_80,"Method Params");
    uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                         ,0x97,&local_80,local_98,(long)local_90 - (long)local_98 >> 3);
    if (local_90 != local_98) {
      uVar5 = 0;
      uVar7 = *local_98;
      while( true ) {
        if (4 < uVar7) {
                    /* try { // try from 00507b60 to 00507b6b has its CatchHandler @ 00507c14 */
          FUN_002f0430(uVar7,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
        }
        uVar5 = uVar5 + 1;
        if ((ulong)((long)local_90 - (long)local_98 >> 3) <= uVar5) break;
        uVar7 = local_98[uVar5];
      }
    }
  }
  if (local_98 != (ulong *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar9;
code_r0x005079a4:
  lVar4 = (long)local_90 - (long)local_98 >> 3;
  uVar7 = lVar4 + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* try { // try from 00507b8c to 00507b93 has its CatchHandler @ 00507b9c */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  goto LAB_00507a0c;
}


