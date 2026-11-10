/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f4230; name: FUN_002f4230
 */


void FUN_002f4230(void)

{
  char *pcVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *__ptr;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  char *local_48;
  
  FUN_002eead8(&local_48,&PTR_s_grpc_trace_04153138);
  pcVar4 = local_48;
  pcVar1 = strchr(local_48,0x2c);
  if (pcVar1 == (char *)0x0) {
    lVar5 = 0;
    lVar8 = 0;
    sVar3 = strlen(pcVar4);
  }
  else {
    lVar5 = 0;
    lVar8 = 0;
    lVar7 = 8;
    do {
      sVar3 = (long)pcVar1 - (long)pcVar4;
      if (pcVar1 < pcVar4) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/debug/trace.cc",100,2,
                     "assertion failed: %s","end >= beg");
                    /* WARNING: Subroutine does not return */
        abort();
      }
                    /* try { // try from 002f4288 to 002f428b has its CatchHandler @ 002f4458 */
      pvVar2 = (void *)FUN_002ebd50(sVar3 + 1);
      memcpy(pvVar2,pcVar4,sVar3);
      *(undefined1 *)((long)pvVar2 + sVar3) = 0;
                    /* try { // try from 002f42a0 to 002f42ab has its CatchHandler @ 002f4458 */
      lVar5 = FUN_002ebdc0(lVar5,lVar7);
      pcVar4 = pcVar1 + 1;
      *(void **)(lVar5 + lVar8 * 8) = pvVar2;
      lVar8 = lVar8 + 1;
      pcVar1 = strchr(pcVar4,0x2c);
      lVar7 = lVar7 + 8;
    } while (pcVar1 != (char *)0x0);
    sVar3 = strlen(pcVar4);
  }
  if ((long)sVar3 < 0) {
                    /* try { // try from 002f43c8 to 002f4417 has its CatchHandler @ 002f441c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/debug/trace.cc",100,2,
                 "assertion failed: %s","end >= beg");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 002f42ec to 002f42ef has its CatchHandler @ 002f441c */
  pvVar2 = (void *)FUN_002ebd50(sVar3 + 1);
  lVar7 = lVar8 + 1;
  memcpy(pvVar2,pcVar4,sVar3);
  *(undefined1 *)((long)pvVar2 + sVar3) = 0;
                    /* try { // try from 002f430c to 002f4313 has its CatchHandler @ 002f441c */
  __ptr = (undefined8 *)FUN_002ebdc0(lVar5,lVar7 * 8);
  __ptr[lVar8] = pvVar2;
  if (lVar7 == 0) {
LAB_002f4384:
                    /* try { // try from 002f4384 to 002f438b has its CatchHandler @ 002f441c */
    free(__ptr);
    pcVar4 = local_48;
    local_48 = (char *)0x0;
    if (pcVar4 != (char *)0x0) {
                    /* try { // try from 002f4398 to 002f439b has its CatchHandler @ 002f4418 */
      free(pcVar4);
    }
    return;
  }
  pcVar4 = (char *)*__ptr;
  puVar6 = __ptr;
  lVar8 = lVar7;
  if (*pcVar4 == '-') goto LAB_002f435c;
  do {
                    /* try { // try from 002f4338 to 002f4367 has its CatchHandler @ 002f4444 */
    FUN_002f4044(pcVar4,1);
    while( true ) {
      lVar8 = lVar8 + -1;
      puVar6 = puVar6 + 1;
      if (lVar8 == 0) {
        puVar6 = __ptr;
        do {
                    /* try { // try from 002f4374 to 002f4377 has its CatchHandler @ 002f4430 */
          free((void *)*puVar6);
          lVar7 = lVar7 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
        goto LAB_002f4384;
      }
      pcVar4 = (char *)*puVar6;
      if (*pcVar4 != '-') break;
LAB_002f435c:
      FUN_002f4044(pcVar4 + 1,0);
    }
  } while( true );
}


