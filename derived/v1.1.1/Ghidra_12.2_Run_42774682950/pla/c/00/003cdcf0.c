/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cdcf0; name: FUN_003cdcf0
 */


void FUN_003cdcf0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  FUN_002ef750(&DAT_0439a8a0);
  if (DAT_0439a898 != 0) goto LAB_003cddf0;
                    /* try { // try from 003cdd28 to 003cdd2f has its CatchHandler @ 003cde28 */
  DAT_0439a898 = FUN_003d2170(0);
                    /* try { // try from 003cdd38 to 003cdd6b has its CatchHandler @ 003cde2c */
  iVar3 = FUN_002f8bb0();
  if (iVar3 == 0) {
    iVar3 = 1;
LAB_003cdd58:
    DAT_0439a890 = iVar3;
    puVar1 = PTR_LAB_043738c8;
  }
  else {
    uVar4 = FUN_002f8bb0();
    if (0x20 < uVar4) {
      iVar3 = 0x20;
      goto LAB_003cdd58;
    }
    iVar3 = FUN_002f8bb0();
    DAT_0439a890 = iVar3;
    puVar1 = PTR_LAB_043738c8;
    if (iVar3 < 1) goto LAB_003cddf0;
  }
  do {
    lVar2 = DAT_0439a898;
                    /* try { // try from 003cdda8 to 003cdde7 has its CatchHandler @ 003cde34 */
    puVar5 = (undefined8 *)FUN_002ebd50(0x58);
    *puVar5 = &LAB_003d1ab4;
    puVar5[1] = lVar2;
    puVar5[5] = 0;
    *(undefined2 *)(puVar5 + 6) = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[7] = "external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc";
    *(undefined4 *)(puVar5 + 8) = 0x18d;
    puVar5[3] = puVar1;
    puVar5[4] = puVar5;
    FUN_00300160(puVar5 + 2,0,0,1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_003cddf0:
  lVar2 = DAT_0439a898;
                    /* try { // try from 003cddf4 to 003cddfb has its CatchHandler @ 003cde30 */
  FUN_002ef790(&DAT_0439a8a0);
  *param_1 = lVar2;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  return;
}


