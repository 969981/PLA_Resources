/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003182d8; name: FUN_003182d8
 */


void FUN_003182d8(long *param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 extraout_x1;
  size_t sVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    lVar16 = (long)(int)param_3 * 8;
    lVar4 = FUN_002e2e80(PTR_FUN_04373078,lVar16);
    pvVar12 = (void *)*param_1;
    sVar13 = param_1[1] - (long)pvVar12;
    if (0 < (long)sVar13) {
      memcpy((void *)(lVar4 - sVar13),pvVar12,sVar13);
      pvVar12 = (void *)*param_1;
    }
    *param_1 = (long)(lVar4 - sVar13);
    param_1[1] = lVar4;
    param_1[2] = lVar4 + lVar16;
    if (pvVar12 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
                    /* try { // try from 00318370 to 003183cf has its CatchHandler @ 00318760 */
  (**(code **)(*param_2 + 0x98))(param_2);
  uVar5 = FUN_0038e580(extraout_x1,param_2,param_5,10,0);
  plVar6 = (long *)FUN_00391e18(extraout_x1,param_5);
  plVar7 = (long *)FUN_0038e578(extraout_x1);
  uVar8 = FUN_00342dac(param_5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar8);
                    /* try { // try from 003183dc to 003183fb has its CatchHandler @ 0031875c */
  puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x18))();
  local_b0 = uVar5;
  plStack_a8 = plVar6;
  uVar8 = (**(code **)(*plVar6 + 0x48))(plVar6,uVar5);
  puVar3 = PTR_FUN_04373078;
  local_a0 = uVar8;
  local_98 = puVar9;
  while( true ) {
    local_80 = uVar5;
    plStack_78 = plVar6;
                    /* try { // try from 00318460 to 0031846b has its CatchHandler @ 0031879c */
    uVar10 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar5);
    uStack_68 = 0;
    local_70 = uVar10;
                    /* try { // try from 0031847c to 0031848f has its CatchHandler @ 003187a8 */
    uVar11 = (**(code **)(*plVar6 + 0x68))(plVar6,uVar5,uVar8,uVar10);
                    /* try { // try from 0031849c to 003184ab has its CatchHandler @ 00318834 */
    (**(code **)(*plVar6 + 0x70))(plVar6,uVar5,uVar10);
    if ((uVar11 & 1) != 0) break;
                    /* try { // try from 003184b8 to 003184cb has its CatchHandler @ 00318794 */
    uVar10 = (**(code **)(*plVar6 + 0x78))(plVar6,uVar5,uVar8,puVar9);
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 < (undefined8 *)param_1[2]) {
      *puVar2 = uVar10;
      param_1[1] = param_1[1] + 8;
    }
    else {
      lVar4 = (long)puVar2 - *param_1 >> 3;
      uVar11 = lVar4 + 1;
      if (uVar11 >> 0x3d != 0) {
        local_a0 = uVar8;
                    /* try { // try from 00318718 to 0031871f has its CatchHandler @ 00318720 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar16 = param_1[2] - *param_1;
      if ((ulong)(lVar16 >> 3) < 0xfffffffffffffff) {
        uVar14 = lVar16 >> 2;
        if (uVar11 <= uVar14) {
          uVar11 = uVar14;
        }
        if (uVar11 != 0) goto LAB_0031851c;
        lVar16 = 0;
      }
      else {
        uVar11 = 0x1fffffffffffffff;
LAB_0031851c:
        lVar16 = FUN_002e2e80(puVar3,uVar11 << 3);
      }
      puVar2 = (undefined8 *)(lVar16 + lVar4 * 8);
      *puVar2 = uVar10;
      pvVar12 = (void *)*param_1;
      sVar13 = param_1[1] - (long)pvVar12;
      if (0 < (long)sVar13) {
        memcpy((void *)((long)puVar2 - sVar13),pvVar12,sVar13);
        pvVar12 = (void *)*param_1;
      }
      *param_1 = (long)((long)puVar2 - sVar13);
      param_1[1] = (long)(puVar2 + 1);
      param_1[2] = lVar16 + uVar11 * 8;
      if (pvVar12 != (void *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
    }
                    /* try { // try from 00318440 to 0031844f has its CatchHandler @ 00318798 */
    uVar8 = (**(code **)(*plVar6 + 0x60))(plVar6,uVar5,uVar8);
  }
  local_a0 = uVar8;
                    /* try { // try from 00318580 to 0031858f has its CatchHandler @ 00318748 */
  (**(code **)(*plVar6 + 0x70))(plVar6,uVar5,uVar8);
  local_98 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9);
    FUN_002e2ea0(PTR_LAB_04373088,puVar9);
  }
                    /* try { // try from 003185bc to 003185c3 has its CatchHandler @ 00318744 */
  lVar4 = FUN_00342dac(param_5);
  puVar3 = PTR_nothrow_04373ab8;
  local_b0 = *(undefined8 *)(lVar4 + 0x28);
  lVar4 = *param_1;
  lVar16 = param_1[1];
  lVar15 = lVar16 - lVar4;
  uVar11 = lVar15 >> 3;
  local_80 = local_b0;
  if (lVar15 < 0x401) {
    pvVar12 = (void *)0x0;
    uVar14 = 0;
  }
  else {
    uVar14 = uVar11;
    if (0xffffffffffffffe < (long)uVar11) {
      uVar14 = 0xfffffffffffffff;
    }
    do {
      pvVar12 = operator_new(uVar14 << 3,(nothrow_t *)puVar3);
      if (pvVar12 != (void *)0x0) goto LAB_00318628;
      uVar14 = uVar14 >> 1;
    } while (uVar14 != 0);
    pvVar12 = (void *)0x0;
  }
LAB_00318628:
                    /* try { // try from 00318628 to 00318643 has its CatchHandler @ 00318728 */
  FUN_0031d0c0(lVar4,lVar16,&local_b0,uVar11,pvVar12,uVar14);
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  if (1 < param_3) {
    lVar4 = 0;
    do {
      puVar9 = (undefined8 *)(*param_1 + lVar4 * 8);
                    /* try { // try from 00318698 to 0031869f has its CatchHandler @ 0031876c */
      uVar11 = FUN_0031cd5c(&local_80,*puVar9,puVar9[1]);
      if ((uVar11 & 1) == 0) {
                    /* try { // try from 003186a4 to 003186b7 has its CatchHandler @ 00318764 */
        FUN_0030f640(&local_b0,2,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/dynamic_message.h"
                     ,0xaf);
        puVar9 = (undefined8 *)(*param_1 + lVar4 * 8);
                    /* try { // try from 003186c4 to 003186df has its CatchHandler @ 0031877c */
        uVar11 = FUN_0031cd5c(&local_80,puVar9[1],*puVar9);
        pcVar1 = "internal error in map key sorting";
        if ((uVar11 & 1) == 0) {
          pcVar1 = "map keys are not unique";
        }
        uVar5 = FUN_0030f3ac(&local_b0,pcVar1);
                    /* try { // try from 003186e0 to 003186e7 has its CatchHandler @ 00318768 */
        FUN_0030f41c(auStack_b8,uVar5);
        FUN_0030f658(&local_b0);
      }
      uVar11 = lVar4 + 2;
      lVar4 = lVar4 + 1;
    } while (uVar11 < (ulong)(long)(int)param_3);
  }
  return;
}


