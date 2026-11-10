/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03329780; name: FUN_03329780
 */


undefined8 * FUN_03329780(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_0444b3c0;
  while ((puVar2 != (undefined8 *)0x0 &&
         (((char *)*puVar2 == (char *)0x0 ||
          (iVar1 = strcmp((char *)*puVar2,"Set Keycodes"), iVar1 != 0))))) {
    puVar2 = (undefined8 *)puVar2[4];
  }
  return puVar2;
}


