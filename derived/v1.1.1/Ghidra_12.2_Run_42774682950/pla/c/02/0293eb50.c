/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293eb50; name: FUN_0293eb50
 */


uint FUN_0293eb50(uint param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 0:
    return param_2;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    fVar2 = 0.4;
    fVar1 = (float)param_1;
    break;
  case 6:
    fVar1 = (float)param_1;
    fVar2 = 0.5;
    break;
  default:
    return param_1;
  case 8:
    return param_1 << 1;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    fVar1 = (float)param_1;
    fVar2 = 2.5;
  }
  return (int)(fVar1 * fVar2);
}


