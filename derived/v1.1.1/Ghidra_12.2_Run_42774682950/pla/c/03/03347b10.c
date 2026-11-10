/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347b10; name: _INIT_1740
 */


void _INIT_1740(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e618 & 1) == 0) {
    DAT_0444e608 = 0;
    DAT_0444e610 = 0;
    DAT_0444ac08 = &DAT_0444e5f8;
    DAT_0444e5f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e600 = &DAT_043617d8;
    DAT_0444e618 = 1;
  }
  return;
}


