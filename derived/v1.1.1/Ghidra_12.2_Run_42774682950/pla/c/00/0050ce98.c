/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050ce98; name: FUN_0050ce98
 */


void FUN_0050ce98(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *__s;
  long lVar9;
  
  if (4 < param_1[0x14]) {
                    /* try { // try from 0050ceb4 to 0050cecb has its CatchHandler @ 0050d01c */
    FUN_002f0430(param_1[0x14],
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver.cc",
                 0x2b);
  }
  FUN_002e4a10(param_1[0x15]);
  puVar8 = (undefined8 *)param_1[0x13];
  if (puVar8 == (undefined8 *)0x0) {
LAB_0050cf30:
    uVar6 = *param_1;
    if ((uVar6 & 1) == 0) goto LAB_0050cf38;
LAB_0050cf68:
    __s = (ulong *)param_1[1];
    if (__s == (ulong *)0x0) {
      uVar6 = 0;
      goto LAB_0050cfd8;
    }
  }
  else {
    lVar5 = puVar8[1];
    plVar1 = puVar8 + 2;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 0050cf00 to 0050cf1f has its CatchHandler @ 0050d018 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar8 + 1,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 0050cff0 to 0050d017 has its CatchHandler @ 0050d018 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 != 1) goto LAB_0050cf30;
    (**(code **)*puVar8)(puVar8);
    FUN_002e2ea0(PTR_LAB_04373088,puVar8);
    uVar6 = *param_1;
    if ((uVar6 & 1) != 0) goto LAB_0050cf68;
LAB_0050cf38:
    __s = param_1 + 1;
  }
  uVar6 = uVar6 >> 1;
  puVar7 = __s + uVar6 * 0x12 + -1;
  lVar5 = uVar6 + 1;
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    uVar4 = *puVar7;
    puVar7 = puVar7 + -0x12;
                    /* try { // try from 0050cf94 to 0050cf97 has its CatchHandler @ 0050d038 */
    FUN_002e4a10(uVar4);
  }
  memset(__s,0xab,uVar6 * 0x90);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar6 = param_1[1];
LAB_0050cfd8:
  FUN_002e2ea0(PTR_LAB_04373088,uVar6);
  return;
}


