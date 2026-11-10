/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005bcd00; name: FUN_005bcd00
 */


void FUN_005bcd00(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  char *local_50;
  undefined8 uStack_48;
  
  lVar2 = FUN_0053f520(0,0,PTR_PTR_04374c10);
                    /* try { // try from 005bcd38 to 005bcd47 has its CatchHandler @ 005bce48 */
  plVar3 = (long *)FUN_0053ee00(PTR_PTR_04375060,lVar2);
  lVar6 = *plVar3;
                    /* try { // try from 005bcd54 to 005bce1f has its CatchHandler @ 005bce54 */
  if ((lVar6 == 0) && (lVar6 = FUN_0053ee00(PTR_PTR_04375000,lVar2), lVar6 != 0)) {
    *plVar3 = lVar6;
  }
  FUN_005b8800(lVar2,param_2[2],param_2 + 3,param_2 + 6,param_3,lVar6);
  uStack_48 = 0x24;
  local_50 = "envoy.lrs.supports_send_all_clusters";
  puVar5 = *(ulong **)(lVar6 + 0x58);
  if ((puVar5 == (ulong *)0x0) || (puVar5[1] == puVar5[2])) {
    FUN_0053f0c0((long *)(lVar6 + 0x58),&local_50,10,lVar2);
  }
  else {
    puVar1 = (undefined8 *)((*puVar5 & 0xfffffffffffffff8) + puVar5[1] * 0x10);
    puVar1[1] = 0x24;
    *puVar1 = "envoy.lrs.supports_send_all_clusters";
    puVar5[1] = puVar5[1] + 1;
  }
  FUN_005bce70(*param_2,*(undefined1 *)(param_2[1] + 0x10),plVar3);
  uVar4 = FUN_00542580(plVar3,PTR_PTR_04375060,lVar2,&local_50);
  FUN_002f2f40(param_1,uVar4,local_50);
  if (lVar2 != 0) {
                    /* try { // try from 005bce24 to 005bce2b has its CatchHandler @ 005bce44 */
    FUN_0053f5f0(lVar2);
  }
  return;
}


