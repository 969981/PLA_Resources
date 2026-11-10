/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f06c0; name: FUN_004f06c0
 */


undefined8 FUN_004f06c0(long param_1,long *param_2)

{
  char cVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  ulong __n;
  
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    pcVar6 = (char *)*param_2;
    cVar1 = *pcVar6;
    *param_2 = (long)(pcVar6 + 1);
    param_2[1] = lVar5 - 1U;
    if (cVar1 == '\x01') {
      if (2 < lVar5 - 1U) {
        __n = (ulong)(byte)pcVar6[1] << 0x10 | (ulong)(byte)pcVar6[2] << 8 | (ulong)(byte)pcVar6[3];
        *param_2 = (long)(pcVar6 + 4);
        param_2[1] = lVar5 - 4U;
        if (lVar5 - 4U == __n) {
          __dest = (void *)FUN_00400260(__n,"external/openssl/ssl/statem/statem_clnt.c",0xad9);
          *(void **)(param_1 + 0x668) = __dest;
          if (__dest == (void *)0x0) {
            uVar2 = 0x50;
            uVar3 = 0x41;
            uVar4 = 0xadc;
          }
          else {
            if (__n <= (ulong)param_2[1]) {
              memcpy(__dest,(void *)*param_2,__n);
              *param_2 = *param_2 + __n;
              param_2[1] = param_2[1] - __n;
              *(ulong *)(param_1 + 0x670) = __n;
              return 1;
            }
            uVar2 = 0x32;
            uVar3 = 0x9f;
            uVar4 = 0xae1;
          }
          goto LAB_004f07a0;
        }
      }
      uVar2 = 0x32;
      uVar3 = 0x9f;
      uVar4 = 0xad6;
      goto LAB_004f07a0;
    }
  }
  uVar2 = 0x32;
  uVar3 = 0x149;
  uVar4 = 0xad0;
LAB_004f07a0:
  FUN_004c99a0(param_1,uVar2,0x1ef,uVar3,"external/openssl/ssl/statem/statem_clnt.c",uVar4);
  return 0;
}


