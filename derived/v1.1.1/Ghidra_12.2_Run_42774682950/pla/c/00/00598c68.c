/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00598c68; name: FUN_00598c68
 */


void FUN_00598c68(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  *(long *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_00598b70(param_1,"chttp2");
  plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar2 = (long *)(*(long *)(param_1 + 8) + 0x10);
  do {
    lVar8 = *plVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar9 + 8),plVar1,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x26f,lVar8,lVar8 + 1,"stream");
  }
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
                    /* try { // try from 00598d30 to 00598d33 has its CatchHandler @ 00599054 */
  FUN_002f2710(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1ff) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = param_5;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
                    /* try { // try from 00598dc8 to 00598dcb has its CatchHandler @ 00599040 */
  FUN_003de320(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x468) = param_5;
  *(undefined8 *)(param_1 + 0x460) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
                    /* try { // try from 00598e34 to 00598e37 has its CatchHandler @ 0059902c */
  FUN_003de320(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x6a0) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined8 *)(param_1 + 0x958) = 0;
  *(undefined1 *)(param_1 + 0x960) = 0;
  *(undefined8 *)(param_1 + 0x968) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x970) = 0;
  *(undefined1 *)(param_1 + 0x978) = 0;
  *(undefined4 *)(param_1 + 0x980) = 0;
  *(undefined1 *)(param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x988) = 0;
  *(undefined8 *)(param_1 + 0x990) = 0;
  *(undefined1 *)(param_1 + 0x998) = 0;
  *(undefined2 *)(param_1 + 0x9b0) = 0;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 1;
  *(undefined2 *)(param_1 + 0xb38) = 0;
  *(undefined8 *)(param_1 + 0x9a8) = 0;
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  *(undefined8 *)(param_1 + 0xb18) = 0;
  *(undefined8 *)(param_1 + 0xb10) = 0;
  *(undefined8 *)(param_1 + 0xb28) = 0;
  *(undefined8 *)(param_1 + 0xb20) = 0;
  *(undefined8 *)(param_1 + 0xb48) = 0;
  *(undefined8 *)(param_1 + 0xb40) = 0;
  if (param_4 != 0) {
    *(int *)(param_1 + 200) = (int)param_4;
    **(long **)(param_2 + 0x318) = param_1;
                    /* try { // try from 00598eb4 to 00598f97 has its CatchHandler @ 00599068 */
    FUN_005a48c0(param_2 + 0xa8,param_4 & 0xffffffff,param_1);
    if (*(char *)(param_2 + 0x1339) == '\0') {
      *(char *)(param_2 + 0x1339) = '\x01';
      plVar1 = (long *)(param_2 + 0x10);
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar9 = *(long *)(param_2 + 8);
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                     "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar9 + 8),
                     (long *)(param_2 + 8),
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0xc6d,lVar8,lVar8 + 1,"destructive_reclaimer");
      }
      *(undefined1 **)(param_2 + 0x1390) = &LAB_0059f6d0;
      *(long *)(param_2 + 0x1398) = param_2;
      *(undefined8 *)(param_2 + 0x13a0) = 0;
      *(undefined1 *)(param_2 + 0x13a8) = 0;
      *(undefined8 *)(param_2 + 0x13c0) = 0;
      *(undefined4 *)(param_2 + 0x13c8) = 0;
      *(undefined1 *)(param_2 + 0x13a9) = 0;
      *(char **)(param_2 + 0x13b0) =
           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
      ;
      *(undefined4 *)(param_2 + 0x13b8) = 0xc6f;
      uVar6 = FUN_00308350(*(undefined8 *)(param_2 + 0x18));
      FUN_00307d00(uVar6,1,param_2 + 5000);
    }
  }
  uVar7 = (**(code **)(*(long *)(param_2 + 0x1130) + 0x10))(param_2 + 0x1130);
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x9c8) = 0;
    *(undefined8 *)(param_1 + 0x9c0) = 0;
    puVar3 = PTR_DAT_04374f10 + 0x10;
    *(undefined8 *)(param_1 + 0x9d0) = 0;
    *(undefined **)(param_1 + 0x9b8) = puVar3;
  }
  else {
                    /* try { // try from 00598fa0 to 00598fab has its CatchHandler @ 00599028 */
    FUN_005aa8ec(param_1 + 0x9b8,param_2 + 0x1130,param_1);
  }
                    /* try { // try from 00598fd0 to 00598fe3 has its CatchHandler @ 00599068 */
  FUN_00305000(param_1 + 0x6a8);
  FUN_00305000(param_1 + 0x7e8);
  FUN_00305000(param_1 + 0x9e8);
  *(undefined1 **)(param_1 + 0x918) = &LAB_005990b0;
  *(long *)(param_1 + 0x920) = param_1;
  *(undefined8 *)(param_1 + 0x928) = 0;
  *(undefined2 *)(param_1 + 0x930) = 0;
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(undefined4 *)(param_1 + 0x950) = 0;
  *(char **)(param_1 + 0x938) =
       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
  *(undefined4 *)(param_1 + 0x940) = 0x28d;
  return;
}


