/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058c180; name: FUN_0058c180
 */


void FUN_0058c180(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *local_40;
  undefined8 *local_38;
  
  if ((param_4 == 0) || (*param_2 == 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/alts/alts_security_connector.cc"
                 ,0x11a,2,"Invalid arguments to grpc_alts_channel_security_connector_create()");
    *param_1 = 0;
  }
  else {
    puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    if (puVar6 != (undefined8 *)0x0) {
      local_38 = (undefined8 *)*param_2;
      *param_2 = 0;
      local_40 = (undefined8 *)*param_3;
      *param_3 = 0;
                    /* try { // try from 0058c1d8 to 0058c1ef has its CatchHandler @ 0058c3c8 */
      FUN_003f68f4(puVar6,&DAT_038a00d4,&local_38,&local_40);
      puVar5 = local_40;
      puVar4 = local_38;
      if (local_40 != (undefined8 *)0x0) {
        lVar8 = local_40[1];
        plVar1 = local_40 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 0058c224 to 0058c243 has its CatchHandler @ 0058c3b0 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),local_40 + 1,lVar9);
        }
        if (lVar9 < 1) {
                    /* try { // try from 0058c35c to 0058c383 has its CatchHandler @ 0058c3b0 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar4 = local_38;
        if (lVar9 == 1) {
          (**(code **)*puVar5)(puVar5);
          FUN_002e2ea0(PTR_LAB_04373088,puVar5);
          puVar4 = local_38;
        }
      }
      local_38 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        lVar8 = puVar4[1];
        plVar1 = puVar4 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 0058c288 to 0058c2a7 has its CatchHandler @ 0058c3ac */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),puVar4 + 1,lVar9);
        }
        if (lVar9 < 1) {
                    /* try { // try from 0058c384 to 0058c3ab has its CatchHandler @ 0058c3ac */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar9 == 1) {
          (**(code **)*puVar4)(puVar4);
          FUN_002e2ea0(PTR_LAB_04373088,puVar4);
        }
      }
      *puVar6 = &PTR_LAB_04189fc8;
                    /* try { // try from 0058c2c4 to 0058c2cb has its CatchHandler @ 0058c3b4 */
      uVar7 = FUN_002ec2d0(param_4);
      puVar6[7] = uVar7;
    }
    *param_1 = puVar6;
  }
  return;
}


