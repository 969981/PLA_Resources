/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed3014; name: FUN_02ed3014
 */


undefined1 * FUN_02ed3014(long *param_1,undefined1 param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  size_t __n;
  
  if ((byte *)*param_1 == (byte *)0x0) {
    __n = 0;
  }
  else {
    __n = (size_t)*(byte *)*param_1;
  }
  iVar5 = (int)__n;
  uVar2 = iVar5 + 5U & 0x1fc;
  lVar1 = __n + 1;
  puVar3 = (undefined1 *)(*DAT_0442d138)(2,uVar2 + (int)lVar1 * 8);
  puVar4 = (undefined1 *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    if (*param_1 != 0) {
      memcpy(puVar3 + 1,(void *)(*param_1 + 1),__n);
      memcpy(puVar3 + uVar2,(void *)(*param_1 + (ulong)(iVar5 + 4U & 0x1fc)),
             (ulong)(uint)(iVar5 << 3));
      (*DAT_0442d150)(2,*param_1);
    }
    puVar4 = puVar3 + __n * 8 + (ulong)uVar2;
    puVar3[lVar1] = param_2;
    *puVar3 = (char)lVar1;
    *param_1 = (long)puVar3;
  }
  return puVar4;
}


