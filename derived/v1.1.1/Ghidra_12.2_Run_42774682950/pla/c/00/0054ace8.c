/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054ace8; name: FUN_0054ace8
 */


void FUN_0054ace8(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  long *local_50;
  long local_48;
  
  *param_1 = 0;
                    /* try { // try from 0054ad10 to 0054ad1b has its CatchHandler @ 0054b0f8 */
  FUN_002ef750(&DAT_0439ed10);
                    /* try { // try from 0054ad28 to 0054ad33 has its CatchHandler @ 0054b0fc */
  lVar6 = FUN_003fdb00(DAT_0439ed00,DAT_0439ed08,param_2,0);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) == param_3)) && (*(long *)(lVar6 + 0x20) == param_4)
     ) {
    plVar7 = (long *)(lVar6 + 0x10);
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar11 = *(long *)(lVar6 + 8);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                    /* try { // try from 0054ad84 to 0054ad9f has its CatchHandler @ 0054b0c0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),(long *)(lVar6 + 8),lVar10,
                   lVar10 + 1);
    }
    puVar13 = (undefined8 *)*param_1;
    if (puVar13 != (undefined8 *)0x0) {
      lVar10 = puVar13[1];
      plVar7 = puVar13 + 2;
      do {
        lVar11 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_48 = lVar6;
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 0054add8 to 0054adf7 has its CatchHandler @ 0054b0bc */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),puVar13 + 1,lVar11);
      }
      if (lVar11 < 1) {
                    /* try { // try from 0054b094 to 0054b0bb has its CatchHandler @ 0054b0bc */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar11 == 1) {
        (**(code **)*puVar13)(puVar13);
        FUN_002e2ea0(PTR_LAB_04373088,puVar13);
      }
    }
    *param_1 = lVar6;
    auVar14._8_8_ = DAT_0439ed08;
    auVar14._0_8_ = DAT_0439ed00;
    local_48 = 0;
    goto LAB_0054afe4;
  }
  plVar7 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x38);
  if (plVar7 == (long *)0x0) {
LAB_0054aee4:
    puVar13 = (undefined8 *)*param_1;
  }
  else {
    plVar9 = plVar7 + 1;
    *plVar9 = 0;
    plVar12 = plVar7 + 2;
    *plVar12 = 1;
    puVar3 = PTR_DAT_04374ce0;
    plVar7[6] = 0;
    plVar7[3] = param_3;
    plVar7[4] = param_4;
    *plVar7 = (long)(puVar3 + 0x10);
    if (lVar6 != 0) {
      plVar7[5] = (long)(((double)*(long *)(lVar6 + 0x28) / (double)*(long *)(lVar6 + 0x18)) *
                        (double)param_3);
      do {
        lVar10 = *plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = lVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar11 = *plVar9;
      if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                    /* try { // try from 0054aeb4 to 0054aecf has its CatchHandler @ 0054b0c4 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),plVar9,lVar10,lVar10 + 1);
      }
      local_48 = 0;
      FUN_0052eec0(&local_48);
      *(long **)(lVar6 + 0x30) = plVar7;
      goto LAB_0054aee4;
    }
    plVar7[5] = param_3;
    puVar13 = (undefined8 *)*param_1;
  }
  if (puVar13 != (undefined8 *)0x0) {
    lVar6 = puVar13[1];
    plVar9 = puVar13 + 2;
    do {
      lVar10 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    local_50 = plVar7;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
                    /* try { // try from 0054af1c to 0054af3b has its CatchHandler @ 0054b0c8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),puVar13 + 1,lVar10);
    }
    if (lVar10 < 1) {
                    /* try { // try from 0054b06c to 0054b093 has its CatchHandler @ 0054b0c8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar10 == 1) {
      (**(code **)*puVar13)(puVar13);
      FUN_002e2ea0(PTR_LAB_04373088,puVar13);
    }
  }
  *param_1 = (long)plVar7;
  local_50 = (long *)0x0;
  FUN_0052eec0(&local_50);
  uVar5 = DAT_0439ed08;
  uVar4 = DAT_0439ed00;
                    /* try { // try from 0054af60 to 0054af67 has its CatchHandler @ 0054b0f4 */
  uVar8 = FUN_002ec2d0(param_2);
  lVar6 = *param_1;
  plVar7 = (long *)(lVar6 + 0x10);
  do {
    lVar10 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar11 = *(long *)(lVar6 + 8);
  if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                    /* try { // try from 0054afa0 to 0054afbb has its CatchHandler @ 0054b0d4 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),(long *)(lVar6 + 8),lVar10,
                 lVar10 + 1);
  }
  local_48 = 0;
                    /* try { // try from 0054afc0 to 0054afd7 has its CatchHandler @ 0054b0d8 */
  auVar14 = FUN_003fdb80(uVar4,uVar5,uVar8,lVar6,0);
LAB_0054afe4:
  DAT_0439ed08 = auVar14._8_8_;
  DAT_0439ed00 = auVar14._0_8_;
  FUN_0052eec0(&local_48);
                    /* try { // try from 0054afe8 to 0054aff3 has its CatchHandler @ 0054b0fc */
  FUN_002ef790(&DAT_0439ed10);
  return;
}


