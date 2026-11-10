/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e22a0; name: FUN_003e22a0
 */


long FUN_003e22a0(undefined8 param_1,long *param_2,undefined4 param_3,undefined8 param_4,
                 long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  void *__ptr;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  char *__s1;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  FUN_003f1ec0();
  uVar5 = FUN_003e4610();
  if ((param_2 == (long *)0x0) || (lVar14 = *param_2, lVar14 == 0)) {
LAB_003e23b4:
    __ptr = (void *)0x0;
LAB_003e23b8:
    uVar11 = 0;
    bVar16 = true;
  }
  else {
    lVar15 = 0;
    bVar16 = false;
    lVar13 = 0;
    do {
      while( true ) {
        lVar12 = param_2[1];
        __s1 = *(char **)(lVar12 + lVar15 + 8);
        iVar4 = strcmp(__s1,"grpc.default_authority");
        if (iVar4 != 0) break;
        bVar16 = true;
LAB_003e2314:
        lVar15 = lVar15 + 0x20;
        lVar14 = lVar14 + -1;
        if (lVar14 == 0) goto LAB_003e2364;
      }
      iVar4 = strcmp(__s1,"grpc.ssl_target_name_override");
      if (iVar4 != 0) goto LAB_003e2314;
      lVar13 = FUN_002e4de0(lVar12 + lVar15);
      lVar15 = lVar15 + 0x20;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
LAB_003e2364:
    if ((lVar13 == 0) || (bVar16)) goto LAB_003e23b4;
    __ptr = (void *)FUN_002ec2d0(lVar13);
    if (__ptr == (void *)0x0) goto LAB_003e23b8;
                    /* try { // try from 003e2388 to 003e239b has its CatchHandler @ 003e26b8 */
    FUN_002e5130(&local_b8,"grpc.default_authority",__ptr);
    bVar16 = false;
    uVar11 = 1;
    uStack_88 = uStack_b0;
    local_90 = local_b8;
    uStack_78 = uStack_a0;
    uStack_80 = local_a8;
  }
                    /* try { // try from 003e23c0 to 003e23d7 has its CatchHandler @ 003e27b8 */
  uVar11 = FUN_002e4250(param_2,&local_90,uVar11);
  uVar6 = FUN_003e4590(param_3);
                    /* try { // try from 003e23dc to 003e23f7 has its CatchHandler @ 003e27ac */
  if (((uVar6 & 1) != 0) && (pcVar7 = (code *)FUN_002e5780(), pcVar7 != (code *)0x0)) {
    uVar11 = (*pcVar7)(param_1,uVar11,param_3);
  }
                    /* try { // try from 003e23fc to 003e24cf has its CatchHandler @ 003e27b8 */
  FUN_003e46c0(uVar5,uVar11);
  FUN_002e4a10(uVar11);
  FUN_003e4640(uVar5,param_1);
  FUN_003e4710(uVar5,param_4);
  FUN_003e4760(uVar5,param_5);
  uVar6 = FUN_003e44b0(uVar5,param_3);
  if ((uVar6 & 1) == 0) {
                    /* try { // try from 003e25fc to 003e2617 has its CatchHandler @ 003e27b8 */
    FUN_003e48a0(uVar5);
    if (param_5 != 0) {
      FUN_00307b20(param_5,0xc800);
    }
    FUN_003f2350();
  }
  else {
    uVar6 = FUN_003e4590(param_3);
    if ((uVar6 & 1) != 0) {
      uVar11 = FUN_003e4700(uVar5);
      uVar8 = FUN_002e4780(uVar11,"grpc.enable_channelz");
      uVar6 = FUN_002e4ee0(uVar8,1);
      if ((uVar6 & 1) != 0) {
        uVar8 = FUN_002e4780(uVar11,"grpc.max_channel_trace_event_memory_per_node");
        iVar4 = FUN_002e4c30(uVar8,0x1000,0x7fffffff);
        local_b8 = (undefined1 *)(long)iVar4;
        local_68 = FUN_003e4ae0(uVar11);
        puVar9 = (undefined1 *)FUN_003e4670(uVar5);
        local_90 = &DAT_03996322;
        if (puVar9 != (undefined1 *)0x0) {
          local_90 = puVar9;
        }
        puVar10 = (undefined8 *)FUN_003e3e1c(&local_90,&local_b8,&local_68);
                    /* try { // try from 003e24d4 to 003e24f3 has its CatchHandler @ 003e26d8 */
        FUN_002f2c60(&local_90,"Channel created");
        FUN_003ed490(puVar10 + 0x15,1,&local_90);
        lVar14 = local_68;
        if (0 < local_68) {
                    /* try { // try from 003e2500 to 003e250f has its CatchHandler @ 003e26cc */
          uVar8 = FUN_003eed6c();
          FUN_003ef028(&local_90,uVar8,lVar14);
          if (local_90 != (undefined1 *)0x0) {
                    /* try { // try from 003e251c to 003e251f has its CatchHandler @ 003e26a4 */
            FUN_003e72b4(local_90,puVar10[4]);
          }
          FUN_003e21d4(&local_90);
        }
                    /* try { // try from 003e2528 to 003e2543 has its CatchHandler @ 003e26c0 */
        FUN_002e5160(&local_90,"grpc.channelz_channel_node",puVar10,&PTR_LAB_04157010);
        local_98 = "grpc.channelz_parent_uuid";
                    /* try { // try from 003e2550 to 003e257f has its CatchHandler @ 003e26e4 */
        uVar11 = FUN_002e4270(uVar11,&local_98,1,&local_90,1);
        FUN_003e46c0(uVar5,uVar11);
        FUN_002e4a10(uVar11);
        if (puVar10 != (undefined8 *)0x0) {
          lVar14 = puVar10[1];
          plVar1 = puVar10 + 2;
          do {
            lVar15 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((lVar14 != 0) && (*(char *)(lVar14 + 0x10) != '\0')) {
                    /* try { // try from 003e25b0 to 003e25cf has its CatchHandler @ 003e26a0 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar14 + 8),puVar10 + 1,lVar15);
          }
          if (lVar15 < 1) {
                    /* try { // try from 003e2678 to 003e269f has its CatchHandler @ 003e26a0 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar15 == 1) {
            (**(code **)*puVar10)(puVar10);
            FUN_002e2ea0(PTR_LAB_04373088,puVar10);
          }
        }
      }
    }
                    /* try { // try from 003e25e0 to 003e25eb has its CatchHandler @ 003e27a0 */
    lVar14 = FUN_003e1ba0(uVar5,param_3);
    if (lVar14 != 0) goto joined_r0x003e2624;
                    /* try { // try from 003e261c to 003e261f has its CatchHandler @ 003e27a0 */
    FUN_003f2350();
  }
  lVar14 = 0;
joined_r0x003e2624:
  if (!bVar16) {
                    /* try { // try from 003e2628 to 003e262f has its CatchHandler @ 003e279c */
    free(__ptr);
  }
  return lVar14;
}


