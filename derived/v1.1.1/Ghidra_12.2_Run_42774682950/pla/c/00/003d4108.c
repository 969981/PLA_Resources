/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d4108; name: FUN_003d4108
 */


long FUN_003d4108(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *local_28;
  
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x58);
  if (lVar5 != 0) {
    local_28 = (long *)*param_1;
    *param_1 = 0;
                    /* try { // try from 003d4148 to 003d4157 has its CatchHandler @ 003d4220 */
    FUN_003d42dc(lVar5,&local_28,*param_2,param_3);
    plVar4 = local_28;
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[1];
      plVar1 = local_28 + 2;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
                    /* try { // try from 003d418c to 003d41ab has its CatchHandler @ 003d421c */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),local_28 + 1,lVar7);
      }
      if (lVar7 < 1) {
                    /* try { // try from 003d41f4 to 003d421b has its CatchHandler @ 003d421c */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
        FUN_002e2ea0(PTR_LAB_04373088,plVar4);
      }
    }
  }
  return lVar5;
}


