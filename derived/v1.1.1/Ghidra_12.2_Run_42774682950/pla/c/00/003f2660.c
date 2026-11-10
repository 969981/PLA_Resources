/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f2660; name: FUN_003f2660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003f2660(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 == 0) {
    puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    uVar4 = _UNK_03888e98;
    uVar7 = _DAT_03888e90;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_LAB_041571d8;
      puVar6[2] = uVar4;
      puVar6[1] = uVar7;
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x298);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_04157258;
      puVar6[1] = 0;
      plVar1 = (long *)(param_3 + 0x10);
      puVar6[2] = 1;
      puVar6[3] = param_2;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar10 = *(long *)(param_3 + 8);
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 003f26e0 to 003f2717 has its CatchHandler @ 003f2810 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                     "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar10 + 8),
                     (long *)(param_3 + 8),
                     "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                     ,0x71,lVar9,lVar9 + 1,"handshake");
      }
      puVar6[4] = param_3;
      *(undefined1 *)(puVar6 + 9) = 0;
      puVar6[0xe] = 0x100;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
                    /* try { // try from 003f2730 to 003f2737 has its CatchHandler @ 003f281c */
      uVar7 = FUN_002ebd50(0x100);
      puVar6[0xf] = uVar7;
      puVar6[0x50] = 0;
      puVar6[0x52] = 0;
      puVar6[0x51] = 0;
                    /* try { // try from 003f274c to 003f278f has its CatchHandler @ 003f282c */
      piVar8 = (int *)FUN_002e4780(param_4,"grpc.tsi.max_frame_size");
      if ((piVar8 != (int *)0x0) && (*piVar8 == 1)) {
        iVar5 = FUN_002e4c30(piVar8,0,0x7fffffff);
        puVar6[0x52] = (long)iVar5;
      }
      FUN_002ef6d0(puVar6 + 5);
      FUN_00305000(puVar6 + 0x10);
      puVar6[0x4c] = 
      "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc";
      puVar6[0x49] = puVar6;
      puVar6[0x4a] = 0;
      puVar6[0x48] = &LAB_003f2acc;
      *(undefined2 *)(puVar6 + 0x4b) = 0;
      puVar6[0x4e] = 0;
      *(undefined4 *)(puVar6 + 0x4f) = 0;
      *(undefined4 *)(puVar6 + 0x4d) = 0x7e;
    }
  }
  *param_1 = puVar6;
  return;
}


