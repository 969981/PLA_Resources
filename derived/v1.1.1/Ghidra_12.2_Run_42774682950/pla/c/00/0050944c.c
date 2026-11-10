/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050944c; name: FUN_0050944c
 */


undefined8 FUN_0050944c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char *__s;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = FUN_0050a00c(param_1 + 0xa8);
  if (lVar2 == 0) {
    uStack_38 = param_2[1];
    local_40 = *param_2;
    uStack_28 = param_2[3];
    uStack_30 = param_2[2];
    __s = (char *)FUN_002f2680(&local_40);
    pcVar3 = strrchr(__s,0x2f);
    pcVar3[1] = '\0';
                    /* try { // try from 00509498 to 005094a3 has its CatchHandler @ 005094f4 */
    FUN_002f2c60(auStack_60,__s);
                    /* try { // try from 005094a4 to 005094af has its CatchHandler @ 005094e8 */
    lVar2 = FUN_0050a00c(param_1 + 0xa8,auStack_60);
    puVar1 = (undefined8 *)(param_1 + 0xd0);
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + 0x30);
    }
    uVar4 = *puVar1;
    if (__s != (char *)0x0) {
                    /* try { // try from 005094c8 to 005094cf has its CatchHandler @ 005094e4 */
      free(__s);
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
  }
  return uVar4;
}


