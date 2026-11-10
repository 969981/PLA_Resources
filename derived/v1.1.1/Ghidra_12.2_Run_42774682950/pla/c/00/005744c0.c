/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005744c0; name: FUN_005744c0
 */


void FUN_005744c0(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *local_48;
  undefined8 *local_38;
  
  puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x58);
  if (puVar6 != (undefined8 *)0x0) {
    local_38 = (undefined8 *)*param_2;
    *param_2 = 0;
    local_48 = (undefined8 *)*param_3;
    *param_3 = 0;
                    /* try { // try from 00574518 to 0057452f has its CatchHandler @ 0057473c */
    FUN_003f68f4(puVar6,"http+fake_security",&local_38,&local_48);
    puVar4 = local_48;
    puVar3 = local_38;
    if (local_48 != (undefined8 *)0x0) {
      lVar8 = local_48[1];
      plVar1 = local_48 + 2;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 00574564 to 00574583 has its CatchHandler @ 00574738 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),local_48 + 1,lVar9);
      }
      if (lVar9 < 1) {
                    /* try { // try from 005746e4 to 0057470b has its CatchHandler @ 00574738 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar3 = local_38;
      if (lVar9 == 1) {
        (**(code **)*puVar4)(puVar4);
        FUN_002e2ea0(PTR_LAB_04373088,puVar4);
        puVar3 = local_38;
      }
    }
    local_38 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      lVar8 = puVar3[1];
      plVar1 = puVar3 + 2;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 005745c8 to 005745e7 has its CatchHandler @ 00574734 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),puVar3 + 1,lVar9);
      }
      if (lVar9 < 1) {
                    /* try { // try from 0057470c to 00574733 has its CatchHandler @ 00574734 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar9 == 1) {
        (**(code **)*puVar3)(puVar3);
        FUN_002e2ea0(PTR_LAB_04373088,puVar3);
      }
    }
    *puVar6 = &PTR_LAB_04189908;
                    /* try { // try from 00574604 to 0057464b has its CatchHandler @ 005748b8 */
    uVar7 = FUN_002ec2d0(param_4);
    puVar6[7] = uVar7;
    FUN_00574090(param_5);
    uVar7 = FUN_002ec2d0();
    puVar6[8] = uVar7;
    lVar8 = FUN_002e4780(param_5,"grpc.address_is_xds_server");
    if (lVar8 == 0) {
      lVar8 = FUN_002e4780(param_5,"grpc.address_is_grpclb_load_balancer");
      bVar5 = lVar8 != 0;
    }
    else {
      bVar5 = true;
    }
    *(bool *)(puVar6 + 9) = bVar5;
                    /* try { // try from 00574658 to 00574673 has its CatchHandler @ 005748b4 */
    lVar8 = FUN_002e4780(param_5,"grpc.ssl_target_name_override");
    uVar7 = 0;
    if (lVar8 != 0) {
      FUN_002e4de0();
      uVar7 = FUN_002ec2d0();
    }
    puVar6[10] = uVar7;
  }
  *param_1 = puVar6;
  return;
}


