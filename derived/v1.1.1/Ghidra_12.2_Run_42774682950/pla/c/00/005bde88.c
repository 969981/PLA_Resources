/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005bde88; name: FUN_005bde88
 */


undefined8
FUN_005bde88(undefined8 param_1,long *param_2,undefined1 *param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_60 [32];
  
  lVar3 = FUN_0053f520(0,0,PTR_PTR_04374c10);
  lVar1 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar1 = param_2[2];
  }
  uVar5 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar5 = param_2[1];
  }
                    /* try { // try from 005bdee0 to 005bdf13 has its CatchHandler @ 005be008 */
  lVar4 = FUN_0053ee00(PTR_PTR_04375090,lVar3);
  if ((lVar4 == 0) ||
     (uVar5 = FUN_005403e0(lVar1,uVar5,lVar4,PTR_PTR_04375090,lVar3), (uVar5 & 1) == 0)) {
                    /* try { // try from 005bdf50 to 005bdf7b has its CatchHandler @ 005bdff0 */
    FUN_002f2c60(auStack_60,"Can\'t decode response.");
    uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                         ,0x822,auStack_60,0,0);
  }
  else {
    if (*(char *)(lVar4 + 1) == '\0') {
      puVar6 = *(ulong **)(lVar4 + 0x10);
      if ((puVar6 != (ulong *)0x0) && (uVar5 = puVar6[1], uVar5 != 0)) {
        uVar8 = *puVar6 & 0xfffffffffffffff8;
        do {
                    /* try { // try from 005bdfc4 to 005bdfcf has its CatchHandler @ 005bdffc */
          FUN_005c65c0(param_4,uVar8,uVar8 + 8);
          uVar5 = uVar5 - 1;
          uVar8 = uVar8 + 0x10;
        } while (uVar5 != 0);
      }
    }
    else {
      *param_3 = 1;
    }
                    /* try { // try from 005bdf38 to 005bdf3b has its CatchHandler @ 005bdfe0 */
    iVar2 = FUN_002ef400(**(undefined8 **)(lVar4 + 8),
                         (ulong)*(uint *)(*(undefined8 **)(lVar4 + 8) + 1) | 0x300000000);
    uVar7 = 0;
    *param_5 = (long)iVar2;
  }
  if (lVar3 != 0) {
                    /* try { // try from 005bdf84 to 005bdf8b has its CatchHandler @ 005bdfec */
    FUN_0053f5f0(lVar3);
  }
  return uVar7;
}


