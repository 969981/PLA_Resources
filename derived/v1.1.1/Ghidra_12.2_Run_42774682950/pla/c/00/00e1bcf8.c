/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1bcf8; name: str
 */


/* std::stringbuf::str() const */

void std::stringbuf::str(void)

{
  long in_x0;
  undefined8 *in_x8;
  
  if ((*(uint *)(in_x0 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(in_x0 + 0x60) >> 3 & 1) == 0) {
      in_x8[1] = 0;
      in_x8[2] = 0;
      *in_x8 = 0;
      return;
    }
  }
  else if (*(ulong *)(in_x0 + 0x58) < *(ulong *)(in_x0 + 0x30)) {
    *(ulong *)(in_x0 + 0x58) = *(ulong *)(in_x0 + 0x30);
  }
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  FUN_00e1bd48();
  return;
}


