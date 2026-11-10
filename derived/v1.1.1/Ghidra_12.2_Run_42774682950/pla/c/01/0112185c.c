/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112185c; name: FUN_0112185c
 */


void FUN_0112185c(undefined1 *param_1,long param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_2bc [620];
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined6 uStack_48;
  
  if (param_3 < 0x32) {
    uVar2 = FUN_011215c4();
    if (param_3 < uVar2) {
      param_2 = param_2 + (ulong)param_3 * 0x278;
      uStack_48 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x6e) >> 0x10);
      uStack_50 = (undefined6)*(undefined8 *)(param_2 + 0x68);
      local_4a = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x30);
      cVar1 = *(char *)(param_2 + 0x76);
      memcpy(auStack_2bc,(void *)(param_2 + 0x77),0x269);
      *param_1 = 0;
      if (cVar1 == '\0') {
        return;
      }
      *(ulong *)(param_1 + 0xe) = CONCAT62(uStack_48,local_4a);
      param_1[0x16] = cVar1;
      *(ulong *)(param_1 + 8) = CONCAT26(local_4a,uStack_50);
      memcpy(param_1 + 0x17,auStack_2bc,0x269);
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


