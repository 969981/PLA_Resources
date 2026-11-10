/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e9004; name: FUN_001e9004
 */


/* WARNING: Removing unreachable block (ram,0x001e91e8) */
/* WARNING: Removing unreachable block (ram,0x001e9350) */
/* WARNING: Removing unreachable block (ram,0x001e931c) */
/* WARNING: Removing unreachable block (ram,0x001e92e8) */
/* WARNING: Removing unreachable block (ram,0x001e92b4) */
/* WARNING: Removing unreachable block (ram,0x001e9140) */
/* WARNING: Removing unreachable block (ram,0x001e9428) */
/* WARNING: Removing unreachable block (ram,0x001e9280) */
/* WARNING: Removing unreachable block (ram,0x001e93c0) */
/* WARNING: Removing unreachable block (ram,0x001e919c) */
/* WARNING: Removing unreachable block (ram,0x001e93f4) */
/* WARNING: Removing unreachable block (ram,0x001e9234) */
/* WARNING: Removing unreachable block (ram,0x001e9384) */
/* WARNING: Removing unreachable block (ram,0x001e90e4) */
/* WARNING: Removing unreachable block (ram,0x001e945c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x001e90f0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001e9004(long *param_1,int param_2)

{
  undefined4 uVar1;
  ulong local_60;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    uVar1 = 6;
    if (param_2 < 0x271b) {
      switch(param_2) {
      case 3:
        uVar1 = 0;
        param_1[0x1d] = local_60 & 2;
        break;
      case 4:
      case 5:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        break;
      case 6:
        uVar1 = 0;
        param_1[0x2a] = local_60;
        break;
      case 7:
        uVar1 = 0;
        param_1[0x2b] = local_60;
        break;
      case 8:
        uVar1 = 0;
        param_1[0x2d] = local_60;
        break;
      case 0xd:
        uVar1 = 0;
        param_1[0x2c] = local_60;
        break;
      default:
        if (param_2 == 0x2712) {
          uVar1 = 0;
          param_1[0xd] = local_60;
        }
        else if (param_2 == 0x2715) {
          uVar1 = 0;
          param_1[0x39] = local_60;
        }
      }
    }
    else if (param_2 < 0x4e24) {
      if (param_2 < 0x271f) {
        if (param_2 == 0x271b) {
          uVar1 = FUN_001f248c(local_60,param_1 + 0x30);
        }
        else {
          if (param_2 != 0x271c) {
            return 6;
          }
          uVar1 = FUN_001f2614(local_60,param_1 + 0x34);
        }
      }
      else if (param_2 == 0x271f) {
        uVar1 = 0;
        param_1[0xf] = local_60;
      }
      else if (param_2 == 0x4e21) {
        uVar1 = 0;
        param_1[0xc] = local_60;
      }
    }
    else if (param_2 < 0x7539) {
      if (param_2 == 0x4e24) {
        uVar1 = 0;
        param_1[0x38] = local_60;
      }
      else if (param_2 == 0x4e2e) {
        uVar1 = 0;
        param_1[0xe] = local_60;
      }
    }
    else if (param_2 == 0x7539) {
      uVar1 = 0;
      param_1[0x2e] = local_60;
    }
    else if (param_2 == 0x753a) {
      uVar1 = 0;
      param_1[0x2f] = local_60;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


