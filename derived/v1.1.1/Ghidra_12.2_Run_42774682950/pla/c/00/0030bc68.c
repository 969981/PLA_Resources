/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030bc68; name: FUN_0030bc68
 */


bool FUN_0030bc68(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  do {
    puVar3 = (undefined8 *)*param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *puVar3 = param_2;
  return param_1 + 9 == puVar3;
}


