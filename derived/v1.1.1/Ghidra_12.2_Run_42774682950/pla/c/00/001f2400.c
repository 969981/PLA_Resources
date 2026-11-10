/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2400; name: FUN_001f2400
 */


undefined8 FUN_001f2400(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && (plVar2 = (long *)FUN_001e95e0(), plVar2 != (long *)0x0))
  {
    for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
      lVar3 = *plVar2;
      iVar1 = FUN_001f8b48(lVar3 + 0x1a,*(undefined8 *)(param_2 + 0xd0));
      if ((iVar1 != 0) && (*(uint *)(param_2 + 0x198) == (uint)*(ushort *)(lVar3 + 0x18))) {
        FUN_001f3934(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined8 *)(param_2 + 0xd0))
        ;
        return 1;
      }
    }
  }
  return 0;
}


