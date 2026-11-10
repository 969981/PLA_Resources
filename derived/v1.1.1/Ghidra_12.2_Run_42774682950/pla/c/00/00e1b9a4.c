/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1b9a4; name: seekoff
 */


/* std::stringbuf::seekoff(long long, std::ios_base::seekdir, unsigned int) */

undefined1  [16] __thiscall
std::stringbuf::seekoff(stringbuf *this,long param_1,int param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(this + 0x30);
  uVar4 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar5) {
    *(ulong *)(this + 0x58) = uVar5;
    uVar4 = uVar5;
  }
  if (((param_4 & 0x18) == 0) || ((param_3 == 1 && ((param_4 & 0x18) == 0x18)))) goto LAB_00e1b9d4;
  if (uVar4 == 0) {
    lVar6 = 0;
joined_r0x00e1ba20:
    if (param_3 != 0) goto LAB_00e1b9fc;
LAB_00e1ba24:
    lVar7 = 0;
  }
  else {
    if (((byte)this[0x40] & 1) != 0) {
      lVar6 = uVar4 - *(long *)(this + 0x50);
      goto joined_r0x00e1ba20;
    }
    lVar6 = uVar4 - (long)(this + 0x41);
    if (param_3 == 0) goto LAB_00e1ba24;
LAB_00e1b9fc:
    if (param_3 == 2) {
      lVar7 = lVar6;
    }
    else {
      if (param_3 != 1) goto LAB_00e1b9d4;
      if ((param_4 >> 3 & 1) == 0) {
        lVar7 = uVar5 - *(long *)(this + 0x28);
      }
      else {
        lVar7 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
      }
    }
  }
  uVar1 = lVar7 + param_1;
  uVar3 = 0xffffffffffffffff;
  if ((-1 < (long)uVar1) && ((long)uVar1 <= lVar6)) {
    if ((uVar1 != 0) &&
       ((((param_4 >> 3 & 1) != 0 && (*(long *)(this + 0x18) == 0)) ||
        (((param_4 >> 4 & 1) != 0 && (uVar5 == 0)))))) {
LAB_00e1b9d4:
      return ZEXT816(0xffffffffffffffff) << 0x40;
    }
    if ((param_4 >> 3 & 1) != 0) {
      *(ulong *)(this + 0x18) = *(long *)(this + 0x10) + uVar1;
      *(ulong *)(this + 0x20) = uVar4;
    }
    if ((param_4 >> 4 & 1) != 0) {
      *(long *)(this + 0x30) = *(long *)(this + 0x28) + (long)(int)uVar1;
    }
    uVar3 = uVar1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}


